#include <iostream>
using namespace std;

int main()
{
    float celcius, fahrenheit, reamur, kelvin;

    cout << "      PROGRAM KONVERSI SUHU" << endl << endl;
    cout << "Masukkan Suhu (Celcius) = ";
    cin >> celcius;

    fahrenheit = (celcius * 9 / 5) + 32;
    reamur = celcius * 4 / 5;
    kelvin = celcius + 273.15;

    cout << "Jadi, " << celcius
         << " derajat celcius = " << fahrenheit
         << " derajat fahrenheit" << endl;
    cout << "      " << celcius
         << " derajat celcius = " << reamur
         << " derajat reamur" << endl;
    cout << "      " << celcius
         << " derajat celcius = " << kelvin
         << " derajat kelvin" << endl;

    return 0;
}
