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
		tabOfNumbers[i] = rand() % 10 + 1;
	}

	std::cout << "Liczby w tablicy:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << "\n";
	}

	//szukanie największej
	int max = tabOfNumbers[0];
	for (int i = 1; i < size; i++)
	{
		if (max < tabOfNumbers[i])
			max = tabOfNumbers[i];
	}
	std::cout << "Największa liczba w zbiorze to " << max << "\n";

	//szukanie najmniejszej
	int min = tabOfNumbers[0];
	for (int i = 1; i < size; i++)
	{
		if (min > tabOfNumbers[i])
			min = tabOfNumbers[i];
	}

	std::cout << "Najmniejsza liczba w zbiorze to " << min << "\n";

	float sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + tabOfNumbers[i];

	std::cout << "Suma liczb: " << sum << "\n";
	std::cout << "Średnia liczb:" << sum / size << "\n";

	int count = 0;
	float average = sum / size;
	for (int i = 0; i < size; i++)
		if (tabOfNumbers[i] > average)
			count++;
	std::cout << "Ilość liczb większa od średniej " << count << "\n";
}

/*Zaimplementuj algorytm sortowania przez wybór*/
void task3()
{
	const int size = 10;

	int tabOfNumbers[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tabOfNumbers[i] = rand() % 10 + 1;
	}

	std::cout << "Liczby w tablicy:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << ", ";
	}
	std::cout << "\n";

	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (tabOfNumbers[min] > tabOfNumbers[j])
				min = j;
		}
		int tmp = tabOfNumbers[i];
		tabOfNumbers[i] = tabOfNumbers[min];
		tabOfNumbers[min] = tmp;
	}

	std::cout << "Liczby w tablicy po posortowaniu:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << ", ";
	}
	std::cout << "\n";

}

/*Zaimplementuj algorytm sortowania bąbelkowego*/
void task4()
{
	const int size = 10;

	int tabOfNumbers[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tabOfNumbers[i] = rand() % 10 + 1;
	}

	std::cout << "Liczby w tablicy:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << ", ";
	}
	std::cout << "\n";

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (tabOfNumbers[j] > tabOfNumbers[j + 1])
			{
				int tmp = tabOfNumbers[j];
				tabOfNumbers[j] = tabOfNumbers[j + 1];
				tabOfNumbers[j + 1] = tmp;
			}
		}
	}

	std::cout << "Liczby w tablicy po posortowaniu:\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << tabOfNumbers[i] << ", ";
	}
	std::cout << "\n";

}

int main()
{
	task4();
}