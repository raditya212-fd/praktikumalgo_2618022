#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "2618022 || Raditya Putra Pratama" << endl;
    cout << "          TUGAS BAB 7" << endl;
    cout << "==============================" << endl;
    cout << "1. Kotak Angka Diagonal" << endl;
    cout << "   Masukkan ukuran kotak: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
