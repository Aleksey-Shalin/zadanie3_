#include<iostream>
#include<windows.h>
int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "rus");
	std::string gender;
	std::string zodiac_sign;
	int age;

	std::cout << "Введите пол: ";
	std::cin >> gender;
	std::cout << "Введите знак зодиака: ";
	std::cin >> zodiac_sign;
	std::cout << "Введите возраст: ";
	std::cin >> age;

	if (gender == "м" && age < 40 && 
	   (zodiac_sign == "рак" || zodiac_sign == "скорпион" || zodiac_sign == "рыбы"))
	{
		std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
	}
	else if (gender == "ж" && age > 15 && age <= 30 && 
		    (zodiac_sign == "телец" || zodiac_sign == "дева" || zodiac_sign == "козерог"))
	{
		std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок." << std::endl;
		std::cout << "Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех.";
	}
	else
		std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";
	return 0;
} 