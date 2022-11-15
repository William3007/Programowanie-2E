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
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	int rest = numberToCheck % 2;
	//if (rest == 0)
	if (numberToCheck % 2 == 0)
		std::cout << "Liczba jest parzysta\n"; //liczba dzieli siê przez 2
	else
		std::cout << "Liczba jest nieparzysta\n"; //liczba nie dzieli siê przez 2
}

/*
Napisz funkcjê która wczyta liczbê która bêdzie bokiem kwadratu i wyœwietliæ
informacjê o polu i obwodzie.
*/
void task5()
{
	int sideOfSquare;

	std::cout << "Podaj d³ugosc boku kwadratu:\n";
	std::cin >> sideOfSquare;

	if (sideOfSquare > 0)
	{
		int area = sideOfSquare * sideOfSquare;
		int circuit = 4 * sideOfSquare;

		std::cout << "Pole: " << area << " Obwód: " << circuit << "\n";
	}
	else
		std::cout << "Poda³eœ nieprawid³ow¹ wartoœæ boku. Powinna byæ wiêksza od zera.\n";
}


/*
Zadanie 6
Napisz funkcjê, która wczyta dwie liczby i wyœwietli wiêksz¹ z nich.
*/
void task6()
{
	int firstNumberFromUser, secondNumberFromUser;

	std::cout << "Podaj pierwsz¹ liczbê:\n";
	std::cin >> firstNumberFromUser;

	std::cout << "Podaj drug¹ liczbê:\n";
	std::cin >> secondNumberFromUser;

	if (firstNumberFromUser > secondNumberFromUser)
		std::cout << "Wiêksza liczba to: " << firstNumberFromUser;
	else if (secondNumberFromUser > firstNumberFromUser)
		std::cout << "Wiêksza liczba to: " << secondNumberFromUser;
	else
		std::cout << "Liczby s¹ równe\n";
}

/*
Zadanie 7
Napisz funkcjê która wczyta trzy liczby i wyœwietli najwiêksz¹ z nich.
*/

void task7()
{
	int firstNumberFromUser, secondNumberFromUser, thirdNumberFromUser;

	std::cout << "Podaj pierwsz¹ liczbê:\n";
	std::cin >> firstNumberFromUser;

	std::cout << "Podaj drug¹ liczbê:\n";
	std::cin >> secondNumberFromUser;

	std::cout << "Podaj trzeci¹ liczbê:\n";
	std::cin >> thirdNumberFromUser;

	if (firstNumberFromUser >= secondNumberFromUser && firstNumberFromUser >= thirdNumberFromUser)
		std::cout << "Wiêksza liczba to: " << firstNumberFromUser;
	else if (secondNumberFromUser >= firstNumberFromUser && secondNumberFromUser >= thirdNumberFromUser)
		std::cout << "Wiêksza liczba to: " << secondNumberFromUser;
	else
		std::cout << "Wiêksza liczba to: " << thirdNumberFromUser;
}

/*
Zadanie 8
Napisz funkcjê, która wczyta dwie liczby i wyœwietli je w kolejnoœci rosn¹cej.
*/

void task8()
{
	int firstNumberFromUser, secondNumberFromUser;

	std::cout << "Podaj pierwsz¹ liczbê:\n";
	std::cin >> firstNumberFromUser;

	std::cout << "Podaj drug¹ liczbê:\n";
	std::cin >> secondNumberFromUser;

	if (firstNumberFromUser < secondNumberFromUser)
		std::cout << firstNumberFromUser << ", " << secondNumberFromUser;
	else
		std::cout << secondNumberFromUser << ", " << firstNumberFromUser;
}

/*
Zadanie 9
Napisz funkcjê, która wczyta trzy liczby i wyœwietli je w kolejnoœci rosn¹cej.
*/

void task8()
{
	int firstNumberFromUser, secondNumberFromUser, thirdNumberFromUser;

	std::cout << "Podaj pierwsz¹ liczbê:\n";
	std::cin >> firstNumberFromUser;

	std::cout << "Podaj drug¹ liczbê:\n";
	std::cin >> secondNumberFromUser;

	std::cout << "Podaj trzeci¹ liczbê:\n";
	std::cin >> thirdNumberFromUser;

	if (firstNumberFromUser >= secondNumberFromUser && secondNumberFromUser >= thirdNumberFromUser)
		std::cout << thirdNumberFromUser << ", " << secondNumberFromUser << ", " << firstNumberFromUser;
	else if (firstNumberFromUser >= thirdNumberFromUser && thirdNumberFromUser >= secondNumberFromUser)
		std::cout << secondNumberFromUser << ", " << thirdNumberFromUser << ", " << firstNumberFromUser;
	else if (secondNumberFromUser >= firstNumberFromUser && firstNumberFromUser >= thirdNumberFromUser)
		std::cout << thirdNumberFromUser << ", " << firstNumberFromUser << ", " << secondNumberFromUser;
	else if (secondNumberFromUser >= thirdNumberFromUser && thirdNumberFromUser >= firstNumberFromUser)
		std::cout << firstNumberFromUser << ", " << thirdNumberFromUser << ", " << secondNumberFromUser;
	else if (thirdNumberFromUser >= firstNumberFromUser && firstNumberFromUser >= secondNumberFromUser)
		std::cout << secondNumberFromUser << ", " << firstNumberFromUser << ", " << thirdNumberFromUser;
	else
		std::cout << firstNumberFromUser << ", " << secondNumberFromUser << ", " << thirdNumberFromUser;
}

/*
Zadanie 10
Napisz funkcjê, która wczyta numer dnia tygodnia i wyœwietli nazwê tego dnia.

Zadanie 11*
Napisz funkcjê, która wczyta wspó³czynniki równania kwadratowego
i wyœwietli pierwiastki tego równania

Zadanie 12
Napisz funkcjê, która wyœwietli komunikaty "gor¹co", "ciep³o", "zimno", "bardzo zimno"
w zale¿noœci od wczytanej temperatury
Zakresy: powy¿ej 30, 15-30, 0-15 i poni¿ej 0.
*/

int main()
{
	setlocale(LC_CTYPE, "polish");

	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	task8();
}
