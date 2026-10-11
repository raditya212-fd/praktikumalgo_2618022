#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14159265;
    float r, t, volume;

    cout << "=== Program Menghitung Volume Tabung ==="<< endl;
    cout << "Masukkan jari-jari tabung : ";
    cin >> r;
    cout << "Masukkan tinggi tabung    : ";
    cin >> t;

    volume = PI * r * r * t;
    cout << "Volume Tabung adalah: " << volume << endl;

    return 0;
}
