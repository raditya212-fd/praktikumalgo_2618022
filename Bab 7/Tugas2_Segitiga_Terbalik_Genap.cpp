#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "2618022 || Raditya Putra Pratama" << endl;
    cout << "          TUGAS BAB 7" << endl;
    cout << "==============================" << endl;
    cout << "2. Segitiga Terbalik Genap" << endl;
    cout << "   Masukkan ukuran segitiga: ";
    cin >> n;
    cout << endl;

    int baris = n;
    while (baris >= 1) {
        int kolom = 1;
        int angka = 2;
        while (kolom <= baris) {
            cout << angka << " ";
            angka += 2;
            kolom++;
        }
        cout << endl;
        baris--;
    }

    return 0;
}
