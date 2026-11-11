#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "2618022 || Raditya Putra Pratama" << endl;
    cout << "          TUGAS BAB 7" << endl;
    cout << "==============================" << endl;
    cout << "3. Segitiga Siku-siku Huruf" << endl;
    cout << "   Masukkan ukuran segitiga siku-siku: ";
    cin >> n;
    cout << endl;

    int baris = 1;
    do {
        int kolom = 1;
        char huruf = 'A';
        do {
            cout << huruf << " ";
            huruf++;
            kolom++;
        } while (kolom <= baris);
        cout << endl;
        baris++;
    } while (baris <= n);

    return 0;
}
