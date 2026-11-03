#include <iostream>
using namespace std;

int main() {
    int n, i;
    int hasil = 1;

    cout << "## Raditya Putra Pratama - 2618022 ##" << endl;
    cout << "==================================" << endl;
    cout << "## Program C++ Hitung Faktorial ##" << endl;
    cout << "==================================" << endl << endl;

    cout << "Input angka: ";
    cin >> n;

    if (n < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif" << endl;
        return 0;
    }

    cout << n << "! = ";
    if (n == 0) {
        cout << "1 = 1" << endl;
        return 0;
    }

    for (i = 1; i <= n; i++) {
        hasil = hasil * i;
        cout << i;
        if (i < n) {
            cout << " * ";
        }
    }
    cout << " = " << hasil << endl;

    return 0;
}
