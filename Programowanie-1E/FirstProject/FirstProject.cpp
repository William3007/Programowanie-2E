// FirstProject.cpp : This file contains the 'main' function.
//  Program execution begins and ends there.


#include <iostream>

int main()
{
    /*
    Instrukcja do wy�wietlania informacji na standardowy strumie� wyj�cia.
    Domy�lnie, jesli nie zosta�o to zmienione, jest to konsola w kt�rej aplikacja
    zosta�a uruchomiona.
    Aby wyswietli� na konsoli nalezy u�y� std::cout.
    Na konosle wywy�amy za pomoca operatora <<.
    Po nim musi znajdowa� si� dana do wys�ania.
    Instrukcj� ko�czymy znakiem �rednik.
 
    "Hello World!\n" - jest to sta�a o warto�ci tekstowej.
    Sta�e tekstowe s� ograniczone znakami cudzys�owu.
    * ' (apostrof) - jesli jest jeden znak
    * " (cudzys��w) - jesli jest zero lub wi�cej znak�w

    W sta�ych tekstowych moga by� wstawiane znaki specjalne. Takie znaki
    zaczynaj� si� od znaku \ (backslash) po kt�rym mo�e si� znajdowa�:
    * jedna litera alfabetu angielskiego
    * trzy cyfry daj�ce liczb� �semkow�
    Przyk�adowo:
    * \n - symbol oznaczaj�cy now� lini�.
    * \t - symbol oznaczaj�cy znak tabulatora
    * \\ - symbol oznaczaj�cy znak \
    * \' - symbol oznaczaj�cy znak '
    * \" - symbol oznaczaj�cy znak "
    * \141 - symbol �semkowy oznaczajacy zgodnie z tablic� kod�w ASCII znak m�aej literki a
    */

    //github.com/IronLittleFox

    std::cout << "Hel\nlo World!\n";
    std::cout << "Hello World!\n";

    std::cout << "Predkosc to km\\h";

    std::cout << "Tabulator\ttabulator\n";

    /*
   56 - sta�a liczbowa
   Sta�e liczowe mog� sk�ada� si� tylko z:
   * cyfr arabskich: 0,1,2,3,4,5,6,7,8,9
   * znaku + lub - znajduj�cego si� na pocz�tku warto�ci ozaczaj�cy znak liczby
   * znaku . (kropka) oznaczaj�cy granic� pomi�dzy cz�ci� ca�kowit� a rzeczywist�
   */
    std::cout << -56;
    std::cout << "\n";
    std::cout << "56";
    std::cout << "\n";
    std::cout << +15.5;
    std::cout << "\n";

    /* Je�li wyst�puje potrzeba wy�wietlenia dw�ch lub wi�cej warto�ci mo�na
    kontynuowa� instrukcj�
    ale te warto�ci nalezy rozdzieli� znakiem <<.
    */
    std::cout << 125.5 << " to jest tekst " << 16 << "\n";

    /*
    Zmienna � konstrukcja programistyczna posiadaj�ca trzy podstawowe atrybuty:
    symboliczn� nazw�, miejsce przechowywania i warto��;
    pozwalaj�ca w kodzie �r�d�owym odwo�ywa� si� przy pomocy nazwy do warto�ci lub miejsca przechowywania.
    Nazwa s�u�y do identyfikowania zmiennej w zwi�zku z tym cz�sto nazywana jest identyfikatorem.
    Miejsce przechowywania przewa�nie znajduje si� w pami�ci komputera i okre�lane jest przez adres i d�ugo�� danych.
    Warto�� to zawarto�� miejsca przechowywania.
    Zmienna zazwyczaj posiada r�wnie� czwarty atrybut: typ, okre�laj�cy rodzaj danych przechowywanych w zmiennej
    i co za tym idzie spos�b reprezentacji warto�ci w miejscu przechowywania. W programie warto�� zmiennej mo�e by�
    odczytywana lub zast�powana now� warto�ci�, tak wi�c warto�� zmiennej mo�e zmienia� si� w trakcie wykonywania programu,
    natomiast dwa pierwsze atrybuty (nazwa i miejsce przechowywania) nie zmieniaj� si� w trakcie istnienia zmiennej.

    Aby wykorzysta� zmienne nale�y je zadeklarowa�.
    Deklaracja zmiennej w jezyku C++:
    typ_zmiennej nazwa_zmiennej;

    typ_zmiennej - jest to informacja co b�dziemy przechowywa� w zmiennej.
    Przyk�adowe typy zmiennych:
    * int - typ liczbowy ca�kowity; zajmuje cztery bajty w pami�ci i pozwala przechowa� warto�ci od -2 147 483 648 do 2 147 483 647
    * short - typ liczbowy ca�kowity; zajmuje dwa bajty i pozwala przechowa� warto�ci	od -32 768 do 32 767
    * float	- typ liczbowy rzeczywisty; zajmuje cztery bajty i pozwala przechowa� warto�ci 3.4E +/- 38 (7 cyfr)
    * bool - typ logiczny; zajmuje jeden bajt i pozwala przechowa� warto�ci	false lub true

    Nazwa zmiennej musi by� poprawnym identyfikatorem:
    * dozwolone znaki: alfabet angielski a-z oraz A-Z, cyfry arabskie 0-9, podkre�lenie _
    * pierwszym znakiem nie mo�e by� cyfra
    * nie mo�e by� to s�owo kluczowe j�zyka
    * musi by� uniklana w swojej widoczno�ci (wyt�umaczone jest to w trakcie nauki)
    */


    std::cout << "Podaj liczbe:\n";
    int numberFromUser;
    std::cin >> numberFromUser;
    std::cout << "Podano: " << numberFromUser << "\n";
}

