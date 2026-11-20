#include <iostream>
#include <string>
using namespace std;

int pilihan;  // variabel global jenis layanan
const int tarifCuciBiasa = 5000;    // per kg
const int tarifCuciSetrika = 7000;  // per kg

void Garis() {
  for (int i = 0; i < 30; i++) {
    cout << "=";
  }
  cout << endl;
}

void dataPelanggan() {
  string nama, noHp;
  cout << "Masukan Nama Pelanggan : ";
  getline(cin, nama);
  cout << "Masukan No. HP : ";
  getline(cin, noHp);
  cout << "Selamat datang, " << nama << "!" << endl;
  Garis();
}

void tampilkanTarif() {
  cout << "\nTarif Laundry per Kg:" << endl;
  cout << "Cuci + Setrika: Rp "
       << tarifCuciSetrika << "/kg" << endl;
  cout << "Cuci Biasa: Rp "
       << tarifCuciBiasa << "/kg" << endl;
}

int hitungCuciSetrika(int berat) {
  return berat * tarifCuciSetrika;
}

int hitungCuciBiasa(int berat) {
  return berat * tarifCuciBiasa;
}

int main() {
  int berat, biaya;
  dataPelanggan();
  cout << "\nPilih Jenis Layanan :" << endl;
  cout << "1. Cuci + Setrika" << endl;
  cout << "2. Cuci Biasa" << endl;
  cout << "Pilihanmu = ";
  cin >> pilihan;
  Garis();
  if (pilihan == 1) {
    cout << "Pilihanmu adalah Cuci + Setrika\n";
    cout << "Masukkan berat pakaian (kg): ";
    cin >> berat;
    biaya = hitungCuciSetrika(berat);
    cout << "Biaya Laundry = Rp " << biaya << endl;
    cout << "Detail: " << berat << " kg x Rp "
         << tarifCuciSetrika << endl;
  } else if (pilihan == 2) {
    cout << "Pilihanmu adalah Cuci Biasa\n";
    cout << "Masukkan berat pakaian (kg): ";
    cin >> berat;
    biaya = hitungCuciBiasa(berat);
    cout << "Biaya Laundry = Rp " << biaya << endl;
    cout << "Detail: " << berat << " kg x Rp "
         << tarifCuciBiasa << endl;
  } else {
    cout << "Pilihan layanan tidak tersedia!\n";
  }
  Garis();
  tampilkanTarif();
  return 0;
}
