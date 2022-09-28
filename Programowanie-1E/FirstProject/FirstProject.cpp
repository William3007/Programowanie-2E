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

    /*
    Zmienna – konstrukcja programistyczna posiadaj¹ca trzy podstawowe atrybuty:
    symboliczn¹ nazwê, miejsce przechowywania i wartoœæ;
    pozwalaj¹ca w kodzie Ÿród³owym odwo³ywaæ siê przy pomocy nazwy do wartoœci lub miejsca przechowywania.
    Nazwa s³u¿y do identyfikowania zmiennej w zwi¹zku z tym czêsto nazywana jest identyfikatorem.
    Miejsce przechowywania przewa¿nie znajduje siê w pamiêci komputera i okreœlane jest przez adres i d³ugoœæ danych.
    Wartoœæ to zawartoœæ miejsca przechowywania.
    Zmienna zazwyczaj posiada równie¿ czwarty atrybut: typ, okreœlaj¹cy rodzaj danych przechowywanych w zmiennej
    i co za tym idzie sposób reprezentacji wartoœci w miejscu przechowywania. W programie wartoœæ zmiennej mo¿e byæ
    odczytywana lub zastêpowana now¹ wartoœci¹, tak wiêc wartoœæ zmiennej mo¿e zmieniaæ siê w trakcie wykonywania programu,
    natomiast dwa pierwsze atrybuty (nazwa i miejsce przechowywania) nie zmieniaj¹ siê w trakcie istnienia zmiennej.

    Aby wykorzystaæ zmienne nale¿y je zadeklarowaæ.
    Deklaracja zmiennej w jezyku C++:
    typ_zmiennej nazwa_zmiennej;

    typ_zmiennej - jest to informacja co bêdziemy przechowywaæ w zmiennej.
    Przyk³adowe typy zmiennych:
    * int - typ liczbowy ca³kowity; zajmuje cztery bajty w pamiêci i pozwala przechowaæ wartoœci od -2 147 483 648 do 2 147 483 647
    * short - typ liczbowy ca³kowity; zajmuje dwa bajty i pozwala przechowaæ wartoœci	od -32 768 do 32 767
    * float	- typ liczbowy rzeczywisty; zajmuje cztery bajty i pozwala przechowaæ wartoœci 3.4E +/- 38 (7 cyfr)
    * bool - typ logiczny; zajmuje jeden bajt i pozwala przechowaæ wartoœci	false lub true

    Nazwa zmiennej musi byæ poprawnym identyfikatorem:
    * dozwolone znaki: alfabet angielski a-z oraz A-Z, cyfry arabskie 0-9, podkreœlenie _
    * pierwszym znakiem nie mo¿e byæ cyfra
    * nie mo¿e byæ to s³owo kluczowe jêzyka
    * musi byæ uniklana w swojej widocznoœci (wyt³umaczone jest to w trakcie nauki)
    */


    std::cout << "Podaj liczbe:\n";
    int numberFromUser;
    std::cin >> numberFromUser;
    std::cout << "Podano: " << numberFromUser << "\n";
}

