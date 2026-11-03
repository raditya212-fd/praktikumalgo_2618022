#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "===== 2618022 || Raditya Putra Pratama =====" << endl << endl;
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    cout << endl << "=== Deret Campur Logika ===" << endl;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i * 2;
        } else if (i % 3 == 0) {
            cout << i + 3;
        } else {
            cout << i;
        }
        if (i < n) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
