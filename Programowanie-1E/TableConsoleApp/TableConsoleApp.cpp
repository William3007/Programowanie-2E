#include <iostream>

void task1()
{
	int a;
	int tab[50];//0,1,2
	
	a = 5;
	tab[0] = 5;
	tab[1] = 3;
	tab[2] = 87;

	a = a * tab[1];


	int x, y, z;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	std::cin >> tab[0];
	std::cin >> tab[1];
	std::cin >> tab[2];

	for (int i = 0; i < 3; i++)
	{
		std::cin >> tab[i];
	}

}

/*
Wyświetl największą liczbę ze zbioru
*/
void task2()
{
	const int size = 10;
	int tabOfNumbers[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tabOfNumbers[i] = rand() % 100 + 1;
	}

	std::cout << "Liczby w tablicy:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << "\n";
	}



}

int main()
{
	task2();
}