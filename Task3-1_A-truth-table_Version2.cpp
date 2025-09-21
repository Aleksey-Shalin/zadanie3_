#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool v1{ false }, v2{ true };
	std::cout << std::boolalpha;

	std::cout << "Оператор: ||" << '\n';
	std::cout << (!v1 || v2) << '\t' << (!v1 || !v2) << '\t' << (v1 || v2) << std::endl;
	std::cout << (v1 || !v2) << '\t' << (!v1 || v2) << '\t' << (v1 || v2) << std::endl;
	std::cout << (v1 || v2) << '\t' << (v1 || !v2) << '\t' << (!v1 || !v2) << std::endl;
	std::cout << (v1 || !v2) << '\t' << (v1 || !v2) << '\t' << (v1 || !v2) << std::endl;
	std::cout << " " << '\n';

	std::cout << "Оператор: &&" << '\n';
	std::cout << (!v1 && v2) << '\t' << (!v1 && v2) << '\t' << (!v1 && v2) << std::endl;
	std::cout << (v1 && v2) << '\t' << (!v1 && v2) << '\t' << (!v1 && !v2) << std::endl;
	std::cout << (!v1 && v2) << '\t' << (!v1 && !v2) << '\t' << (v1 && v2) << std::endl;
	std::cout << (!v1 && !v2) << "\t" << (v1 && v2) << "\t" << (v1 && !v2) << std::endl;
	return 0;
}