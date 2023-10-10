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

/*
* Napisz funkcje, która dla kolekcji danych liczbowych obliczy częstotliwość występowania danej liczby.
*/

/*

* Napisz funkcję, która dla kolekcji danych liczbowych znajdzie najdłuższy rosnący podciąg.
* Napisz funkcję, która dla kolekcji danych liczbowych przeniesie te liczby do osobnych kolekcji liczb parzystych i nieparzystych.


tablicaLiczb[i] = rand() % (zakresGorny - zakresDolny + 1) + zakresDolny;
*/

int main()
{
	//zad1();
	//zad2();
	zad3();

}