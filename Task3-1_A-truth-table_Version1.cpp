#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool v1{ true }, v2{ true }, result1, result2;
	std::cout << std::boolalpha;

	std::cout << "Оператор: ||" << '\n';
	result1 = v1 || v2;
	std::cout << v1 << "\t" << v2 << "\t" << result1 << std::endl;
	result1 = !v1 || v2;
	std::cout << !v1 << '\t' << v2 << '\t' << result1 << std::endl;
	result1 = v1 || !v2;
	std::cout << v1 << "\t" << !v2 << "\t" << result1 << std::endl;
	result1 = !v1 || !v2;
	std::cout << !v1 << '\t' << !v2 << '\t' << result1 << std::endl;
	std::cout << " " << '\n';

	std::cout << "Оператор: &&" << "\n";
	result2 = v1 && v2;
	std::cout << v1 << '\t' << v2 << '\t' << result2 << std::endl;
	result2 = !v1 && v2;
	std::cout << !v1 << "\t" << v2 << "\t" << result2 << std::endl;
	result2 = v1 && !v2;
	std::cout << v1 << '\t' << !v2 << '\t' << result2 << std::endl;
	result2 = !v1 && !v2;
	std::cout << !v1 << "\t" << !v2 << "\t" << result2 << std::endl;
	return 0;
}