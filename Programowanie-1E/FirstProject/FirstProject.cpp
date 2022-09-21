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

    std::cout << "Tabulator\ttabulator\n";

    /*
   56 - sta³a liczbowa
   Sta³e liczowe mog¹ sk³adaæ siê tylko z:
   * cyfr arabskich: 0,1,2,3,4,5,6,7,8,9
   * znaku + lub - znajduj¹cego siê na pocz¹tku wartoœci ozaczaj¹cy znak liczby
   * znaku . (kropka) oznaczaj¹cy granicê pomiêdzy czêœci¹ ca³kowit¹ a rzeczywist¹
   */
    std::cout << -56;
    std::cout << "\n";
    std::cout << "56";
    std::cout << "\n";
    std::cout << +15.5;
    std::cout << "\n";

    /* Jeœli wystêpuje potrzeba wyœwietlenia dwóch lub wiêcej wartoœci mo¿na 
    kontynuowaæ instrukcjê
    ale te wartoœci nalezy rozdzieliæ znakiem <<.
    */
    std::cout << 125.5 << " to jest tekst " << 16 << "\n";


}
