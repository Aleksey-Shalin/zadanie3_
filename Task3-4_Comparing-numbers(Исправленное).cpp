#include<iostream>
#include<windows.h>
#include<string> 

std::string edinitsy(int variable)      // функция для преобразования единиц в слова
{
    switch(variable)
    {
    case 0: return "ноль"; break; case 1: return "один"; break; case 2: return "два"; break; case 3: return "три"; break; case 4: return "четыре"; break;
    case 5: return "пять"; break; case 6: return "шесть"; break; case 7: return "семь"; break; case 8: return "восемь"; break; case 9: return "девять";
    }
}

std::string tnadsat(int variable)       // функция для преобразования чисел от 11 по 19 в слова
{
    switch(variable)
    {
    case 10: return "десять"; break; case 11: return "одиннадцать"; break; case 12: return "двенадцать"; break;
    case 13: return "тринадцать"; break; case 14: return "четырнадцать"; break; case 15: return "пятнадцать"; break;
    case 16: return "шестнадцать"; break; case 17: return "семнадцать"; break; case 18: return "восемнадцать"; break; case 19: return "девятнадцать"; break;
    }
}

std::string desyatki(int variable)      // функция для преобразования десяток в слова
{
    switch(variable)
    {
    case 2: return "двадцать"; break; case 3: return "тридцать"; case 4: return "сорок"; break; case 5: return "пятьдесят"; break;
    case 6: return "шестьдесят"; break; case 7: return "семьдесят"; break; case 8: return "восемьдесят"; break; case 9: return "девяносто"; break;
    }
}

    std::string digitals_words(int number)
    {
        if (number < 0)     // если число меньше 0, то присвоить ему отрицательное значение и вернуть то же самое число по функции std::string digitals_words(int number) со словом минус
        {
            number = -number;
            return "минус " + digitals_words(number);
        }
        if (number < 10)       // если число меньше 10, то вернуть результаты из функции std::string digit(int variable)
        return edinitsy(number);

        if (number < 20)      // если число больше, но меньше 20, то вернуть результаты из функции std::string tnadsat(int variable)
        return tnadsat(number);

        std::string desyatki_digit = desyatki(number / 10);   // функция для корректного вывода на консоль десятков
        if (number % 10 != 0)
        {
            desyatki_digit += " " + edinitsy(number % 10);      // к десяткам прибавить единицы из std::string digit(int variable)
        }
        return desyatki_digit;    // вернуть значение функции std::string desyatki_digit после отработки условия
    }


    int main()      // основная функция программы
    {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        setlocale(LC_CTYPE, "Russian");
        int a = 0;
        int b = 0;
        std::cout << "Введите первое целое число: ";
        std::cin >> a;
        std::cout << "Введите второе целое число: ";
        std::cin >> b;
        std::cout << " " << std::endl;
        if ((a < 100 && a > -100) && (b < 100 && b > -100))
        {
            if (a > b)
            {
                std::cout << digitals_words(a) << " больше чем " << digitals_words(b);
            }

            else if (a < b)
            {
                std::cout << digitals_words(a) << " меньше чем " << digitals_words(b);
            }

            else if (a == b)
            {
                std::cout << digitals_words(a) << " равно " << digitals_words(b);
            }
        }
        else
        {
            std::cout << "Ошибка! Одно (или оба) из чисел вне диапазона";
        }
        return 0;
    }
