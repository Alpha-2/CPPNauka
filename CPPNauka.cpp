#include <iostream>

using namespace std;

int dodawanie(int liczba1, int liczba2) 
{
    int wynik = liczba1 + liczba2;

    return wynik;
}

int main()
{
    cout << "Wynik:" << " " << dodawanie(2, 4);
}