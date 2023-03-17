#include <iostream>

void showTextForUser()
{
	std::cout << "Podaj pierwsz¹ liczbê:\n";
}

int getFirstNumber()
{
	int x;
	showTextForUser();
	std::cin >> x;
	return x;
}

void task1()
{
	int firstNumberFromUser = 2;

	firstNumberFromUser = getFirstNumber();

	std::cout << "Podwojona wartoœæ to " << (firstNumberFromUser * 2) << "\n";
}

void task2()
{
	int firstNumberFromUser = 2;

	firstNumberFromUser = getFirstNumber();

	if (firstNumberFromUser > 0)
		std::cout << "Liczba dodatnia\n";
	else
		std::cout << "Liczba ujemna\n";
}

void task3()
{
	double y;

	y = sqrt(17);

	std::cout << y;
}

int getNumber(std::string text)
{
	int x;
	std::cout << text;
	std::cin >> x;
	return x;
}

void task4()
{
	int firstNumber, secondNumber;

	firstNumber = getNumber("Podaj pierwsz¹ liczbê:\n");
	secondNumber = getNumber("Podaj drug¹ liczbê:\n");

	if (firstNumber > secondNumber)
		std::cout << firstNumber;
	else
		std::cout << secondNumber;
}

int main()
{
	//task3();
	//task1();
	//task2();
	//task1();
	task4();
}

