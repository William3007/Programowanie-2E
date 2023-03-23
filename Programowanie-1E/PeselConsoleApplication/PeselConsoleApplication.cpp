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

bool checkPesel(std::string stringPesel)
{
    //d³ugoœæ 11 znaków
    if (stringPesel.length() != 11)
        return false;
     
    //tylko cyfry
    for (int i = 0; i < 11; i++)
    {
        if (stringPesel[i] < '0'
            || stringPesel[i] > '9')
        {
            return false;
        }
    }
    
     
    //sprawdzenie poprawnoœci miesi¹ca
    //sprawdzenie poprawnoœci dnia
    //sprawdzenie cyfry kontrolnej

    return true;
}

int main()
{
    std::string stringPesel = getPesel();

    if (checkPesel(stringPesel) == true)
    {
        //pesel poprawny
        std::cout << "Pesel poprawny\n";
    }
    else
    {
        //pesel niepoprawny
        std::cout << "Podany numer pesel jest niepoprawny\n";
    }
}
