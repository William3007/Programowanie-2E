#include <iostream>
using namespace std;
/*
Napisz program/funkcję która dla tablicy z liczbami pseudolosowymi policzy
średnią arytmetyczną tych liczb.
*/
void zad1()
{
	const int SizeOfTable = 3;
	int tab[SizeOfTable];
	float avarageOfNumber;
	float sumeOfNumbers = 0;

	srand(time(NULL));
	for (int i = 0; i < SizeOfTable; i++)
	{
		tab[i] = rand() % 10;
		sumeOfNumbers = sumeOfNumbers + tab[i];
	}

	avarageOfNumber = sumeOfNumbers / SizeOfTable;

	for (int i = 0; i < SizeOfTable; i++)
	{
		cout << tab[i] << ", ";
	}
	cout << endl << "srednia wynosi = " << avarageOfNumber;
}


/*
* Napisz funkcję, która dla kolekcji danych liczbowych policzy ile jest liczb większych od średniej arytmetycznej.
 */
void zad2()
{
	const int SizeOfTable = 3;
	int tab[SizeOfTable];
	float avarageOfNumber;
	float sumeOfNumbers = 0;

	srand(time(NULL));
	for (int i = 0; i < SizeOfTable; i++)
	{
		tab[i] = rand() % 10;
		sumeOfNumbers = sumeOfNumbers + tab[i];
		cout << tab[i] << ", ";
	}
	avarageOfNumber = sumeOfNumbers / SizeOfTable;

	int NumbersBiggerThenAvarage = 0;

	for (int i = 0; i < SizeOfTable; i++)
	{
		if (tab[i] > avarageOfNumber)
		{
			NumbersBiggerThenAvarage++;
		}
	}

	cout << endl << "Liczb wiekszych od sredniej rownej: " << avarageOfNumber << " Jest =  " << NumbersBiggerThenAvarage << endl;
}

/*
* Napisz funkcje, która dla kolekcji danych liczbowych przeniesie te liczby do innej kolekcji w odwrotnej kolejności.
*/
void zad3()
{
	const int SizeOfTable = 3;
	int firsttab[SizeOfTable];
	int secondTab[SizeOfTable];

	srand(time(NULL));
	for (int i = 0; i < SizeOfTable; i++)
	{
		firsttab[i] = rand() % 10;
		cout << firsttab[i] << ", ";
	}
	cout << endl;

	for (int i = 0, j = SizeOfTable - 1; i < SizeOfTable; i++, j--)
	{
		secondTab[j] = firsttab[i];
	}

	for (int i = 0; i < SizeOfTable; i++)
	{
		cout << secondTab[i] << ", ";
	}
}
//*Napisz funkcje, która dla kolekcji danych liczbowych obliczy czêstotliwoœæ wystêpowania danej liczby.task5
//nie dokoncz
void zad4()
{
	const int bottomRange = -4;
	const int upperRange = 5;
	const int tableSize = 10;
	int tab[tableSize];
	int intervalOfNumber[upperRange - bottomRange + 1];


	for (int i = 0; i < upperRange - bottomRange + 1; i++)
	{
		intervalOfNumber[i] = 0;
	}

	srand(time(NULL));
	for (int i = 0; i < tableSize; i++)
	{
		tab[i] = rand() % (upperRange - bottomRange + 1) + bottomRange;
		std::cout << tab[i] << ", ";
	}

	for (int i = 0; i < tableSize; i++)
	{
		intervalOfNumber[tab[i] - bottomRange]++;
	}

	std::cout << "\n";

	for (int i = 0; i < upperRange - bottomRange + 1; i++)
	{
		std::cout << "czestotliwosc liczby " << (i + bottomRange) << " jest:  " << intervalOfNumber[i] << "\n";
	}

}

//*Napisz funkcjê, która dla kolekcji danych liczbowych znajdzie najd³u¿szy rosn¹cy podci¹g.task6
void zad5()
{
	const int bottomRange = 1;
	const int upperRange = 10;
	const int size = 10;
	int tab[size];

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % (upperRange - bottomRange + 1) + bottomRange;
		std::cout << tab[i] << ", ";

	}

	int maxSubsequencelLenght = 1;
	int currentSubsequencelLenght = 1;

	for (int i = 1; i < size; i++)
	{
		if (tab[i] >= tab[i - 1])
			currentSubsequencelLenght++;
		else if (currentSubsequencelLenght > maxSubsequencelLenght)
		{
			maxSubsequencelLenght = currentSubsequencelLenght;
			currentSubsequencelLenght = 1;
		}
		else
			currentSubsequencelLenght = 1;
	}

	if (currentSubsequencelLenght > maxSubsequencelLenght)
	{
		maxSubsequencelLenght = currentSubsequencelLenght;
	}

	std::cout << "\n" << " Najdlurzszy podciag jest = " << maxSubsequencelLenght;
}

//Napisz funkcjê, która dla kolekcji danych liczbowych przeniesie te liczby do osobnych kolekcji liczb parzystych i nieparzystych.task 7

void zad6()
{
	const int size = 10;
	int tab[size];
	int tabEven[size]; //parzyste 
	int tabOdd[size];  //nieparzyste 

	int numbersEven = 0;
	int numbersOdd = 0;

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		tab[i] = rand() % 100 + 1;
		std::cout << tab[i] << ", ";

		if (tab[i] % 2 == 0)
		{
			tabEven[numbersEven] = tab[i];
			numbersEven++;
		}
		else
		{
			tabOdd[numbersOdd] = tab[i];
			numbersOdd++;
		}
	}

	std::cout << "\n" << "liczby parzyste:" << "\n";

	for (int i = 0; i < numbersEven; i++)
	{
		std::cout << tabEven[i] << ", ";
	}

	std::cout << "\n" << "liczby nieparzyste:" << "\n";
	for (int i = 0; i < numbersOdd; i++)
	{
		std::cout << tabOdd[i] << ", ";
	}
}

int main()
{
	//zad1();
	//zad2();
	//zad3();
	zad4();
	zad5();
	zad6();
}