#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj siê
*/

/*
Operatory porównania:

* równoœci				==
* ró¿noœci				!=
* wiêkszoœci			>
* mniejszoœci			<
* wiêksze lub równe		>=
* mniejsze lub równe	<=

argument1 >= argument2

Wynikiem dzia³ania tych operatorów
jest wartoœæ logiczna true/false typu bool

bool zmienna = true;
bool zmienna2 = 5 > 74;

*/

/*
Operatory logiczna:
F - false
T - true

			  and		  or		not
A	B		A && B		A || B		!A
F	F		  F			  F			T
F	T		  F			  T			T
T	F		  F			  T			F
T   T		  T			  T			F


*/

/*
Napisz funkcjê, któa wczyta dwie liczby i wykona dzielenie na nich
*/
void task1()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe (nie podawaj zera):\n";
	std::cin >> secondNumber;

	//iloraz
	int quotient = 0;

	/*if (secondNumber != 0)
		quotient = firstNumber / secondNumber;

	if (secondNumber != 0)
		std::cout << "Iloraz: " << quotient << "\n";

	if (secondNumber == 0)
		std::cout << "Dzielenie przez zero!!!!\n";*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz: " << quotient << "\n";
	}
	else
	{
		std::cout << "Dzielenie przez zero!!!!\n";
	}

	std::cout << "Koniec programu\n";
}

/*
Napisz funkjcê, która wczyta liczbê i wyœwietli informacjê
czy jest ona dodatnia czy nie.
*/
void task2()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	if (numberToCheck > 0)
		std::cout << "Liczba wiêksza od zera\n";
	else
		std::cout << "Liczba równa lub mniejsza od zera\n";
}

/*
Napisz funkcjê, która wczyta liczbê i wyœwietli informacjê
czy jest ona w zakresie <10, 25>.
*/
void task3()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	/*if (numberToCheck >= 10)
	{
		if (numberToCheck <= 25)
		{
			std::cout << "Liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "Liczba nie jest w zakresie\n";
		}
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}*/

	if (numberToCheck >= 10 && numberToCheck <= 25)
	{
		std::cout << "Liczba jest w zakresie\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie\n";
	}
}

/*
Napisz funkcjê która wczyta liczbê i wyœwietli informacjê czy jest ona parzysta czy nie.
*/
void task4()
{

}

/*
Napisz funkcjê która wczyta liczbê która bêdzie bokiem kwadratu i wyœwietliæ informacjê o polu i obwodzie.
*/
void task5()
{

}

/*
Zadanie 6
Napisz funkcjê, która wczyta dwie liczby i wyœwietli wiêksz¹ z nich.

Zadanie 7
Napisz funkcjê która wczyta trzy liczby i wyœwietli najwiêksz¹ z nich.

Zadanie 8
Napisz funkcjê, która wczyta dwie liczby i wyœwietli je w kolejnoœci rosn¹cej.

Zadanie 9
Napisz funkcjê, która wczyta trzy liczby i wyœwietli je w kolejnoœci rosn¹cej.

Zadanie 10
Napisz funkcjê, która wczyta numer dnia tygodnia i wyœwietli nazwê tego dnia.

Zadanie 11*
Napisz funkcjê, która wczyta wspó³czynniki równania kwadratowego i wyœwietli pierwiastki tego równania

Zadanie 12
Napisz funkcjê, która wyœwietli komunikaty "gor¹co", "ciep³o", "zimno", "bardzo zimno"
w zale¿noœci od wczytanej temperatury
Zakresy: powy¿ej 30, 15-30, 0-15 i poni¿ej 0.
*/

int main()
{
	//task1();
	//task2();
	//task3();
	task4();
}
