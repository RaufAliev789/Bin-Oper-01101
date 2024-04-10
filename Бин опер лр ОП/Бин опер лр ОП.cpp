#include <iostream>

void COUNT_1(std::string length, const int N)
{
    int start = 0;
    int count = 0;

    for (int i = 0; i < N; ++i)
    {
        if ((length[i] == '1') && (i == 0 || length[i - 1] == '0'))
        {
            start = i; // Запоминаем начало последовательности
            count = 1; // Инициализируем счетчик
        }
        else if ((length[i] == '1') && (length[i - 1] == '1'))
        {
            count++; // Увеличиваем счетчик единиц в последовательности
        }
        else if ((length[i] == '0') && (count > 1))
        {
            std::cout << start << ", " << count << std::endl; // Выводим начало и длину последовательности
            count = 0; // Сбрасываем счетчик
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    std::string length;
    int N;

    std::cout << "Введите двоичную последовательность: ";
    std::cin >> length;

    std::cout << "Введите количество битов: ";
    std::cin >> N;

    COUNT_1(length, N);  //получает указатель на строку

    return 0;
}
