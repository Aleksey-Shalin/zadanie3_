#include<iostream>
#include<windows.h>
#include<string>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "rus");
	int a, b;
	std::cout << "Введите первое целое число: ";
	std::cin >> a;
	std::cout << "Введите второе целое число: ";
	std::cin >> b;
	std::cout << " " << std::endl;
	//std::string a_string = std::to_string(a);
	//std::string b_string = std::to_string(b);

	if ((a < 100 && a > -100) && (b < 100 && b > -100))
	{
		std::string a_string = std::to_string(a);
		std::string b_string = std::to_string(b);
		if (a > b)
		{
			std::cout << a_string + " больше чем " + b_string;
		}
		else if (a < b)
		{
			std::cout << a_string + " меньше чем " + b_string;
		}
		else if (a = b)
		{
			std::cout << a_string + " равно " + b_string;
		}
	}
		else
			std::cout << "Ошибка! Одно (или оба) из чисел вне диапазона";
	return 0;
}
