#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string dataKamar[100][2];   // [i][0] = nomor kamar, [i][1] = status
    int hargaKamar[100][1];     // [i][0] = harga per malam
    int jumlah;

    cout << "=== PROGRAM MANAJEMEN KAMAR HOTEL ===" << endl;
    cout << "Masukkan jumlah kamar: ";
    cin >> jumlah;

    cout << "\n--- INPUT DATA KAMAR HOTEL ---" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << "\nKamar ke-" << i + 1 << endl;
        cout << "Nomor kamar: ";
        cin >> dataKamar[i][0];
        cout << "Status (Terisi/Kosong): ";
        cin >> dataKamar[i][1];
        cout << "Harga per malam (angka): ";
        cin >> hargaKamar[i][0];
    }

    cout << "\n--- DATA KAMAR HOTEL ---" << endl;
    cout << "====================================================" << endl;
    cout << left << setw(4) << "No" << "| " << setw(12) << "Nomor Kamar"
         << "| " << setw(10) << "Status" << "| " << "Harga per Malam" << endl;
    cout << "====================================================" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(4) << i + 1 << "| " << setw(12) << dataKamar[i][0]
             << "| " << setw(10) << dataKamar[i][1] << "| " << hargaKamar[i][0] << endl;
    }
    cout << "====================================================" << endl;

    int totalTerisi = 0, totalKosong = 0, totalPendapatan = 0;
    for (int i = 0; i < jumlah; i++) {
        if (dataKamar[i][1] == "Terisi") {
            totalTerisi++;
            totalPendapatan += hargaKamar[i][0];
        } else if (dataKamar[i][1] == "Kosong") {
            totalKosong++;
        }
    }

    cout << "\nTotal kamar terisi  : " << totalTerisi << endl;
    cout << "Total kamar kosong  : " << totalKosong << endl;
    cout << "Total pendapatan    : Rp " << totalPendapatan << endl;

    return 0;
}
