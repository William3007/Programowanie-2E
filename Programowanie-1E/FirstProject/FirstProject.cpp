// FirstProject.cpp : This file contains the 'main' function.
//  Program execution begins and ends there.


#include <iostream>

int main()
{
    /* 
    Instrukcja do wyœwietlania informacji na standardowy strumieñ wyjœcia.
    Domyœlnie, jesli nie zosta³o to zmienione, jest to konsola w której aplikacja 
    zosta³a uruchomiona.
    Aby wyswietliæ na konsoli nalezy u¿yæ std::cout.
    Na konosle wywy³amy za pomoca operatora <<.
    Po nim musi znajdowaæ siê dana do wys³ania.
    Instrukcjê koñczymy znakiem œrednik.

    "Hello World!\n" - jest to sta³a o wartoœci tekstowej.
    Sta³e tekstowe s¹ ograniczone znakami cudzys³owu.
    * ' (apostrof) - jesli jest jeden znak
    * " (cudzys³ów) - jesli jest zero lub wiêcej znaków

    W sta³ych tekstowych moga byæ wstawiane znaki specjalne. Takie znaki 
    zaczynaj¹ siê od znaku \ (backslash) po którym mo¿e siê znajdowaæ:
    * jedna litera alfabetu angielskiego
    * trzy cyfry daj¹ce liczbê ósemkow¹
    Przyk³adowo:
    * \n - symbol oznaczaj¹cy now¹ liniê.
    * \t - symbol oznaczaj¹cy znak tabulatora
    * \\ - symbol oznaczaj¹cy znak \
    * \' - symbol oznaczaj¹cy znak '
    * \" - symbol oznaczaj¹cy znak "
    * \141 - symbol ósemkowy oznaczajacy zgodnie z tablic¹ kodów ASCII znak m³aej literki a
    */

    //github.com/IronLittleFox

    std::cout << "Hel\nlo World!\n";
    std::cout << "Hello World!\n";

    std::cout << "Predkosc to km\\h";

    std::cout << "Tabulator\ttabulator";
}
