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

/*
Zadanie 2
Napisz funkcjê, która wyœwietli wszystkie liczby ca³kowite z przedzia³u <1;10>
*/

void task2()
{
    std::cout << "1, 2, 3, 4, 5, 6, 7, 8, 9, 10 \n";

    int currentNumber = 1;

    do
    {
        std::cout << currentNumber << ", ";
        //currentNumber = currentNumber + 1;
        //currentNumber += 1;
        currentNumber++;
    } while (currentNumber != 11); // (currentNumber < 11)
}

/*
Zadanie 3
Napisz funkcjê, która wyœwietli wszystkie liczby ca³kowite z przedzia³u pobranego od u¿ytkownika
*/

void task3()
{
    int lowRange, highRange;
    std::cout << "Podaj zakres dolny\n";
    std::cin >> lowRange;
    std::cout << "Podaj górny zakres\n";
    std::cin >> highRange;

    int currentNumber = 1;

    do
    {
        std::cout << currentNumber << ", ";
        //currentNumber = currentNumber + 1;
        //currentNumber += 1;
        currentNumber++;
    } while (currentNumber != 11); // (currentNumber < 11)
}


int main()
{
    setlocale(LC_CTYPE, "polish");

    //task1();
    //task2();
    task3();
}
