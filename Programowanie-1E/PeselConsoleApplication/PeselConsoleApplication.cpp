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

}

int main()
{
    std::string stringPesel = getPesel();

    if (checkPesel(stringPesel) == true)
    {
        //pesel poprawny
    }
    else
    {
        //pesel niepoprawny
        std::cout << "Podany numer pesel jest niepoprawny\n";
    }
}
