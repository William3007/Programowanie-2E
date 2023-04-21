//Zadady:
/*
	* DRY - don't repeat yourself
	* KISS - keep it simple, stupid
	* SOLID - S: single responsibility
	*
 */
#include <iostream>

int convertCharsToInt(char firstChar, char secondChar)
{
	return (firstChar - 48) * 10 + (secondChar - 48) * 1;
}

int corectYear(int month, int year)
{
	if (month >= 1 && month <= 12)
		return 1900 + year;
	if (month >= 21 && month <= 32)
		return 2000 + year;
	if (month >= 41 && month <= 52)
		return 2100 + year;
	if (month >= 61 && month <= 72)
		return 2200 + year;
	if (month >= 81 && month <= 92)
		return 1800 + year;
}

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
	1900-1999 01-12 +0 
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

	//wersja 3
	//int month = (stringPesel[2] - 48) * 10 + (stringPesel[3] - 48) * 1;
	int month = convertCharsToInt(stringPesel[2], stringPesel[3]);
	if (month >= 1 && month <= 12)
		return true;
	if (month >= 21 && month <= 32)
		return true;
	if (month >= 41 && month <= 52)
		return true;
	if (month >= 61 && month <= 72)
		return true;
	if (month >= 81 && month <= 92)
		return true;

	//wersja 4
	int monthV4 = convertCharsToInt(stringPesel[2], stringPesel[3]);
	monthV4 = monthV4 % 20;
	if (monthV4 >= 1 && monthV4 <= 12)
		return true;

	errorMessage = "Miesi¹c w numerze jest niepoprawny";
	return false;
}

bool checkPeselDay(std::string stringPesel, std::string& errorMessage)
{
	int day = convertCharsToInt(stringPesel[4], stringPesel[5]);
	int month = convertCharsToInt(stringPesel[2], stringPesel[3]);
	int year = convertCharsToInt(stringPesel[0], stringPesel[1]);
	year = corectYear(month, year);
	errorMessage = "Dzieñ w numerze pesel jest niepoprawny";

	if (day == 0 || day > 31)
		return false;

	if (day == 31 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
		return false;

	if (month == 2 && day > 29)
		return false;

	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

	if (month == 2 && day == 29 && !isLeapYear)
		return false;

	errorMessage = "";
	return true;
}

bool checkPeselControlDigit(std::string stringPesel, std::string& errorMessage)
{
	int d0 = convertCharsToInt('0', stringPesel[0]);
	int d1 = convertCharsToInt('0', stringPesel[1]);
	int d2 = convertCharsToInt('0', stringPesel[2]);
	int d3 = convertCharsToInt('0', stringPesel[3]);
	int d4 = convertCharsToInt('0', stringPesel[4]);
	int d5 = convertCharsToInt('0', stringPesel[5]);
	int d6 = convertCharsToInt('0', stringPesel[6]);
	int d7 = convertCharsToInt('0', stringPesel[7]);
	int d8 = convertCharsToInt('0', stringPesel[8]);
	int d9 = convertCharsToInt('0', stringPesel[9]);
	int d10 = convertCharsToInt('0', stringPesel[10]);


	int sum = d0 * 1 + d1 * 3 + d2 * 7 + d3 * 9
		    + d4 * 1 + d5 * 3 + d6 * 7 + d7 * 9
		    + d8 * 1 + d9 * 3 + d10 * 1;

	if (sum % 10 == 0)
		return true;

	errorMessage = "B³êdny pesel - sprawdzenie cyfry kontrolnej";
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

	if (checkPeselDay(stringPesel, errorMessage) == false)
		return false;

	if (checkPeselControlDigit(stringPesel, errorMessage) == false)
		return false;

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
