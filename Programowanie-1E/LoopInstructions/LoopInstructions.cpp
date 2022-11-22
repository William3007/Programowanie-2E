#include <iostream>

/*
Zadanie 1
Napisz funkcjê, która pobierze od u¿ytkownika liczbê dodatni¹ (do skutku). 
*/

void task1()
{
    int number;

    do
    {
        std::cout << "Podaj liczbê dodatni¹:\n";
        std::cin >> number;
    } while (number <= 0);

    std::cout << "Poda³eœ liczbê " << number << "\n";

}

int main()
{
    setlocale(LC_CTYPE, "polish");

    task1();
}
