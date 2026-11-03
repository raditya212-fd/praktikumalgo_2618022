#include <iostream>
using namespace std;

int main() {
    int level = 1;
    int maxLevel = 5;   
    int jawaban, kunci;
    bool lanjut = true;

    cout << "===== 2618022 || Raditya Putra Pratama =====" << endl << endl;
    cout << "=====   PROGRAM GAME MATEMATIKA   =====" << endl << endl;

    do {
        kunci = level + (level * 5);

        cout << "Level " << level << endl;
        cout << "Berapa hasil dari " << level << " + " << level * 5 << " ? ";
        cin >> jawaban;

        if (jawaban == kunci) {
            cout << "Benar! Naik level!" << endl << endl;
            level++;
        } else {
            cout << "Game Over" << endl;
            lanjut = false;
        }
    } while (lanjut && level <= maxLevel);

    if (lanjut) {
        cout << "Selamat! Kamu menyelesaikan semua level!" << endl;
    }

    return 0;
}
