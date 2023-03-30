//Zadady:
/*
	* DRY - don't repeat yourself
	* KISS - keep it simple, stupid
	* SOLID - S: single responsibility
	*
 */
#include <iostream>

std::string getPesel()
{
	std::string stringPesel;
	std::cout << "Podaj numer pesel:\n";
	std::cin >> stringPesel;
	return stringPesel;
}

bool checkPeselLength(std::string stringPesel, std::string& errorMessage)
{
	//d³ugoœæ 11 znaków
	if (stringPesel.length() != 11)
	{
		errorMessage = "Pesel powinien mieæ 11 znaków";
		return false;
	}
	return true;
}

bool checkPeselAllDigits(std::string stringPesel, std::string& errorMessage)
{
	//tylko cyfry
	for (int i = 0; i < 11; i++)
	{
		if (stringPesel[i] < '0'
			|| stringPesel[i] > '9')
		{
			errorMessage = "Pesel powinien sk³adaæ siê z samych cyfr";
			return false;
		}
	}
	return true;
}

bool checkPeselMonth(std::string stringPesel, std::string& errorMessage)
{
	/*
	1900-1999  1-12 +0
	2000-2099 21-32 +20
	2100-2199 41-52 +40
	2200-2299 61-72 +60
	1800-1899 81-92 +80
	*/
	//stringPesel[2] stringPesel[3]

	//Wersja 1
	if (stringPesel[2] == '0' && stringPesel[3] >= '1' && stringPesel[3] <= '9') //01 - 09
		return true;
	if (stringPesel[2] == '1' && stringPesel[3] >= '0' && stringPesel[3] <= '2') //10 - 12
		return true;
	if (stringPesel[2] == '2' && stringPesel[3] >= '1' && stringPesel[3] <= '9') //21 - 29
		return true;
	if (stringPesel[2] == '3' && stringPesel[3] >= '0' && stringPesel[3] <= '2') //30 - 32
		return true;
	if (stringPesel[2] == '4' && stringPesel[3] >= '1' && stringPesel[3] <= '9') //41 - 49
		return true;
	if (stringPesel[2] == '5' && stringPesel[3] >= '0' && stringPesel[3] <= '2') //50 - 52
		return true;
	if (stringPesel[2] == '6' && stringPesel[3] >= '1' && stringPesel[3] <= '9') //61 - 69
		return true;
	if (stringPesel[2] == '7' && stringPesel[3] >= '0' && stringPesel[3] <= '2') //70 - 72
		return true;
	if (stringPesel[2] == '8' && stringPesel[3] >= '1' && stringPesel[3] <= '9') //81 - 89
		return true;
	if (stringPesel[2] == '9' && stringPesel[3] >= '0' && stringPesel[3] <= '2') //90 - 92
		return true;

	//Wersja 2
	for (int i = 0; i < 10; i = i + 2)
	{
		if (stringPesel[2] == i && stringPesel[3] >= '1' && stringPesel[3] <= '9') //01 - 09
			return true;
		if (stringPesel[2] == i + 1 && stringPesel[3] >= '0' && stringPesel[3] <= '2') //10 - 12
			return true;
	}

	return false;
}

bool checkPesel(std::string stringPesel, std::string& errorMessage)
{
	if (checkPeselLength(stringPesel, errorMessage) == false)
		return false;

	if (checkPeselAllDigits(stringPesel, errorMessage) == false)
		return false;

	if (checkPeselMonth(stringPesel, errorMessage) == false)
		return false;

	//sprawdzenie poprawnoœci miesi¹ca
	//sprawdzenie poprawnoœci dnia
	//sprawdzenie cyfry kontrolnej

	return true;
}

int main()
{
	std::string stringPesel = getPesel();
	std::string errorMessage = "";

	if (checkPesel(stringPesel, errorMessage) == true)
	{
		//pesel poprawny
		std::cout << "Pesel poprawny\n";
	}
	else
	{
		//pesel niepoprawny
		std::cout << "Podany numer pesel jest niepoprawny\n";
		std::cout << "Kominikat: " << errorMessage << "\n";
	}
}
