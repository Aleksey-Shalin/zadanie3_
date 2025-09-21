// В данной версии программы числа сравниваются между собой, чтобы найти, какое число является наименьшим, средним и наибольшим между ними
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
	int mid = (v1 >= v2 && v1 <= v3 || v1 <= v2 && v1 >= v3) ? v1
		: (v2 >= v1 && v2 <= v3 || v2 <= v1 && v2 >= v3) ? v2 : v3;
	int max = v1 >= v2 && v1 >= v3 ? v1
		: v2 >= v3 ? v2 : v3;
	std::cout << max << " " << mid << " " << min << std::endl;
	return 0;
}