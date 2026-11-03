#include <iostream>
using namespace std;

int main() {
    int n, i;
    int total;

    cout << "##          2618022          ##" << endl;
    cout << "## Program C++ Penjumlahan Deret ##" << endl;
    cout << "=================================" << endl << endl;

    cout << "Jumlah deret yang diinginkan: ";
    cin >> n;
    cout << endl;

    i = 1;
    total = 0;
    while (i <= n) {
        cout << i;
        if (i < n) {
            cout << " + ";
        }
        total = total + i;
        i++;
    }
    cout << " = " << total << endl;

    return 0;
}
