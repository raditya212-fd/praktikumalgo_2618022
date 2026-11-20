#include <iostream>
#include <string>
using namespace std;

int pilihan;  // variabel global
const double PI = 3.14;

// Fungsi non-void: mengembalikan garis "="
string garis() {
  string g = "";
  for (int i = 0; i < 45; i++) {
    g += "=";
  }
  return g;
}

// Fungsi void: input data diri
void DataDiri() {
  string nama, nim;
  cout << "Masukan Nama Lengkap Anda : ";
  getline(cin, nama);
  cout << "Masukan Nim Anda : ";
  getline(cin, nim);
  cout << garis() << endl;
}

// Fungsi void: menu dan pilihan bangun datar
void BangunDatar() {
  cout << "\n=== BANGUN DATAR ===" << endl;
  cout << "1. Persegi" << endl;
  cout << "2. Persegi panjang" << endl;
  cout << "3. Segitiga" << endl;
  cout << "4. Lingkaran" << endl;
  cout << "5. Keluar" << endl;
  cout << "Masukan Pilihan Bangun Datar : ";
  cin >> pilihan;
  switch (pilihan) {
    case 1:
      cout << "Pilihan Anda Adalah Persegi\n";
      break;
    case 2:
      cout << "Pilihan Anda Adalah Persegi Panjang\n";
      break;
    case 3:
      cout << "Pilihan Anda Adalah Segitiga\n";
      break;
    case 4:
      cout << "Pilihan Anda Adalah Lingkaran\n";
      break;
    case 5:
      cout << "Anda memilih keluar\n";
      break;
    default:
      cout << "Pilihan tidak tersedia!\n";
  }
}

// Fungsi void: menghitung luas atau volume
void Hitung() {
  int jenis;
  double s, p, l, a, t, tp, r;
  cout << "\nKamu ingin Hitung Luas(1)/Volume(2) ? ";
  cin >> jenis;
  if (jenis == 1) {
    switch (pilihan) {
      case 1:
        cout << "Masukan sisi : ";
        cin >> s;
        cout << "Luas Persegi : sisi x sisi = "
             << s * s << endl;
        break;
      case 2:
        cout << "Masukan panjang : ";
        cin >> p;
        cout << "Masukan lebar : ";
        cin >> l;
        cout << "Luas Persegi Panjang : "
             << "panjang x lebar = " << p * l << endl;
        break;
      case 3:
        cout << "Masukan alas : ";
        cin >> a;
        cout << "Masukan tinggi : ";
        cin >> t;
        cout << "Luas Segitiga : "
             << "1/2 x alas x tinggi = "
             << 0.5 * a * t << endl;
        break;
      case 4:
        cout << "Masukan jari-jari : ";
        cin >> r;
        cout << "Luas Lingkaran : phi x r x r = "
             << PI * r * r << endl;
        break;
    }
  } else if (jenis == 2) {
    switch (pilihan) {
      case 1:
        cout << "Masukan sisi : ";
        cin >> s;
        cout << "Volume Kubus : sisi x sisi x sisi = "
             << s * s * s << endl;
        break;
      case 2:
        cout << "Masukan panjang : ";
        cin >> p;
        cout << "Masukan lebar : ";
        cin >> l;
        cout << "Masukan tinggi : ";
        cin >> t;
        cout << "Volume Balok : "
             << "panjang x lebar x tinggi = "
             << p * l * t << endl;
        break;
      case 3:
        cout << "Masukan alas : ";
        cin >> a;
        cout << "Masukan tinggi segitiga : ";
        cin >> t;
        cout << "Masukan tinggi prisma : ";
        cin >> tp;
        cout << "Volume Prisma Segitiga : "
             << "(1/2 x alas x tinggi) "
             << "x tinggiPrisma = "
             << 0.5 * a * t * tp << endl;
        break;
      case 4:
        cout << "Masukan jari-jari : ";
        cin >> r;
        cout << "Masukan tinggi tabung : ";
        cin >> t;
        cout << "Volume Tabung : "
             << "phi x r x r x tinggi = "
             << PI * r * r * t << endl;
        break;
    }
  } else {
    cout << "Pilihan harus 1 atau 2!" << endl;
  }
}

int main() {
  char ulang;
  DataDiri();
  do {
    BangunDatar();
    if (pilihan >= 1 && pilihan <= 4) {
      Hitung();
      cout << "\n" << garis() << "\n" << endl;
      cout << "Apakah kamu ingin menghitung lagi? "
           << "(y/n): ";
      cin >> ulang;
    } else if (pilihan == 5) {
      ulang = 'n';
    } else {
      ulang = 'y';
    }
  } while (ulang == 'y' || ulang == 'Y');
  cout << "\nSELAMAT KAMU TELAH "
       << "MENYELESAIKAN LATIHAN !!!" << endl;
  return 0;
}
