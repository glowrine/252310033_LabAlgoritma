#include <iostream>
using namespace std;

int main() {
    char nama[40];
    double A, B, C, rata;
    int kategori;

    cout << "Nama Siswa : ";
    cin.getline(nama, 40);

    cout << "Nilai Pertandingan I : ";
    cin >> A;
    cout << "Nilai Pertandingan II : ";
    cin >> B;
    cout << "Nilai Pertandingan III : ";
    cin >> C;

    rata = (A + B + C) / 3;

    if (rata >= 85)
        kategori = 1;
    else if (rata >= 70)
        kategori = 2;
    else
        kategori = 3;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya ";

    switch (kategori) {
        case 1:
            cout << "mendapatkan hadiah Komputer Core i5." << endl;
            break;
        case 2:
            cout << "mendapatkan Uang sebesar Rp. 2.500,00." << endl;
            break;
        case 3:
            cout << "mendapatkan Hiburan." << endl;
            break;
    }

    return 0;
}
