// В данной версии программы числа сравниваются c наименьшим и наибольшим, чтобы найти, какое из них является средним между ними
#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int v1, v2, v3;
	std::cout << "Введите первое число: ";
	std::cin >> v1;
	std::cout << "Введите второе число: ";
	std::cin >> v2;
	std::cout << "Введите третье число: ";
	std::cin >> v3;
	std::cout << " " << std::endl;
	int min = v1 <= v2 && v1 <= v3 ? v1
		: v2 <= v3 ? v2 : v3;
	int max = v1 >= v2 && v1 >= v3 ? v1
		: v2 >= v3 ? v2 : v3; 
	//int mid = (v1 >= min && v1 <= max) ? v1
		//: (v2 >= min && v2 <= max) ? v2 : v3;

	int mid;
		if (v1 >= min && v1 <= max) 
		{
			mid = v1;
		}
		else
		{
			if (v2 >= min && v2 <= max)
			{
				mid = v2;
			}
			else
			{
				if (v3 >= min && v3 <= max)
				{
					mid = v3;
				}
			}
		}
	std::cout << max << " " << mid << " " << min << std::endl;
	return 0;
}