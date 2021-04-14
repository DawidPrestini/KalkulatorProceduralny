#include <iostream>

#include "dodawanie.h"


using namespace std;

int main()
{
    int wybor;

    cout << "Program kalkulator wersja 1.0" << endl;
    cout << "Menu glowne:" << endl;
    cout << "1. Dodawanie dwoch liczb:" << endl;
    cout << "2. Odejmowanie dwoch liczb:" << endl;
    cout << "3. Mnozenie dwoch liczb:" << endl;
    cout << "4. Dzielenie dwoch liczb:" << endl;

    cout << "Wybierz opcje dzialania: " << endl;
    cin >> wybor;

    cout << dodawanie(2,3) << endl;

    return 0;
}
