#include<iostream>
#include<windows.h>
#include<string> 
std::string number(int variable) {  // функция для единиц
    switch (variable) {
    case 0: return "ноль"; break; case 1: return "один"; break; case 2: return "два"; break; case 3: return "три"; break; case 4: return "четыре"; break;
    case 5: return "пять"; break; case 6: return "шесть"; break; case 7: return "семь"; break; case 8: return "восемь"; break; case 9: return "девять";
    default: return "";
    }
}
std::string teens(int variable) {      // функция для чисел от 11 по 19
    switch (variable) {
    case 10: return "десять"; break; case 11: return "одиннадцать"; break; case 12: return "двенадцать"; break;
    case 13: return "тринадцать"; break; case 14: return "четырнадцать"; break; case 15: return "пятнадцать"; break;
    case 16: return "шестнадцать"; break; case 17: return "семнадцать"; break; case 18: return "восемнадцать"; break; case 19: return "девятнадцать"; break;
    default: return "";
    }
}
std::string desyatki(int variable) {   // функция для десяток
    switch (variable) {
    case 2: return "двадцать"; break; case 3: return "тридцать"; case 4: return "сорок"; break; case 5: return "пятьдесят"; break;
    case 6: return "шестьдесят"; break; case 7: return "семьдесят"; break; case 8: return "восемьдесят"; break; case 9: return "девяносто"; break;
    default: return "";
    }
}

std::string digitals_words(int digit)
{
    if (digit < 10) return number(digit);
    if (digit < 20) return teens(digit);
    std::string sum = desyatki(digit / 10);
    if (digit % 10 != 0)
    {
        sum += " " + number(digit % 10);
    }
    return sum;
}

int main() {    // Основной блок выполнения программы
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "Russian");
    int a, b;
    std::cout << "Введите первое целое число: ";
    std::cin >> a;
    std::cout << "Введите второе целое число: ";
    std::cin >> b;
    std::cout << " " << std::endl;


    if ((a < 100 && a > -100) && (b < 100 && b > -100))
    {
        if (a > b)
        {
            if (a < 0)
            {
                std::cout << "минус " << digitals_words(a) << " больше чем " << digitals_words(b);
            }
            else if (b < 0)
            {
                std::cout << digitals_words(a) << " больше чем " << "минус " << digitals_words(b);
            }
            else if ((a < 0) && (b < 0))
            {
                std::cout << "минус " << digitals_words(a) << " больше чем " << "минус " << digitals_words(b);
            }
            else
                std::cout << digitals_words(a) << " больше чем " << digitals_words(b);
        }

        else if (a < b)
        {
            if (a < 0)
            {
                std::cout << "минус " << digitals_words(a) << "меньше чем " << digitals_words(b);
            }
            else if (b < 0)
            {
                std::cout << digitals_words(a) << "меньше чем" << "минус " << digitals_words(b);
            }
            else if ((a < 0) && (b < 0))
            {
                std::cout << "минус " << digitals_words(a) << " меньше чем " << "минус " << digitals_words(b);
            }
            else
            {
                std::cout << digitals_words(a) << " меньше чем " << digitals_words(b);
            }
        }

        else if (a == b)
        {
            if ((a < 0) && (b < 0))
            {
                std::cout << " минус " << digitals_words(a) << " равно " << " минус " << digitals_words(b);
            }
            else  std::cout << digitals_words(a) << " равно " << digitals_words(b);
        }
    }
    else
    {
        std::cout << "Ошибка! Одно (или оба) из чисел вне диапазона";
    }
    return 0;
}
