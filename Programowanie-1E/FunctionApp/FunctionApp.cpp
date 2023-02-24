#include <iostream>

void ShowTextForUser()
{
	std::cout << "Podaj pierwsz¹ liczbê:\n";
}

int GetFirstNumber()
{
	int x;
	ShowTextForUser();
	std::cin >> x;
	return x;
}

void task1()
{
	int firstNumberFromUser = 2;

	firstNumberFromUser = GetFirstNumber();

	std::cout << "Podwojona wartoœæ to " << (firstNumberFromUser * 2) << "\n";
}

void task2()
{
	int firstNumberFromUser = 2;

	firstNumberFromUser = GetFirstNumber();

	if (firstNumberFromUser > 0)
		std::cout << "Liczba dodatnia\n";
	else
		std::cout << "Liczba ujemna\n";
}

void task3()
{
	double y;

	y = sqrt(8);

	std::cout << y;
}


int main()
{
	//task3();
	task1();
	//task2();
	//task1();

}

