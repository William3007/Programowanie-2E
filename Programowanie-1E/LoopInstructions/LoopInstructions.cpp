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
    std::cout << "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, \n";

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

    int currentNumber = lowRange;
    
    do
    {
        std::cout << currentNumber << ", ";
        currentNumber++;
    } while (currentNumber != highRange + 1); // (currentNumber <= highRange)
}

/*
Zadanie 4
Zgadnij liczbê.
*/

void task4()
{
    int randomNumber;

    srand(time(NULL));

    /*
    <a;b> a <= b

    <0; b-a>
    rand() % (b - a + 1) + a;

    */
    //od 1 do 100
    randomNumber = rand() % 100 + 1;

    //std::cout << "Wylosowana liczba to " << randomNumber << "\n";

    int numberFromUser;
    do
    {
        std::cout << "Podaj liczbê:\n";
        std::cin >> numberFromUser;

        if (numberFromUser > randomNumber)
            std::cout << "Liczba za du¿a\n";
        if (numberFromUser < randomNumber)
            std::cout << "Liczba za ma³a\n";
    } while (numberFromUser != randomNumber);

    std::cout << "Gratulacje.";
}

/*
Zadanie 5
Napisz funkcjê, która wyœwietli wszystkie liczby ca³kowite z przedzia³u pobranego od u¿ytkownika

Poprawka do zadania 3 gdzie górny zakres nie mo¿e byæ mniejszy od dolnego.
*/
void task5()
{
    int lowRange, highRange;
    std::cout << "Podaj zakres dolny\n";
    std::cin >> lowRange;
    std::cout << "Podaj górny zakres\n";
    std::cin >> highRange;

    int currentNumber = lowRange;
    if (lowRange > highRange)
        std::cout << "B³êdny zakres\n";

    while (currentNumber <= highRange)
    {
        std::cout << currentNumber << ", ";
        currentNumber++;
    }
    std::cout << "\nTa linijka jest poza petl¹\n";
}

/*
Zadanie 6
Napisz funkcjê która policzy NWD dwóch liczb. NWD - najwiêkszy wspólny dzielnik
*/
void task6()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsz¹ liczbê\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug¹ liczbê\n";
    std::cin >> secondNumber;

    int dzielnik;
    if (firstNumber > secondNumber)
        dzielnik = secondNumber;
    else
        dzielnik = firstNumber;
    //algorytm NWD
    while (firstNumber % dzielnik > 0 || secondNumber % dzielnik > 0)
        dzielnik--;

    std::cout << "NWD = " << dzielnik << "\n";

}

int main()
{
    setlocale(LC_CTYPE, "polish");

    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    task6();
}
