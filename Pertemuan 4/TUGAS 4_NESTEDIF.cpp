#include <iostream>
using namespace std;

int main() {
    char nama[40];
    double A, B, C, rata;

    cout << "Nama Siswa : ";
    cin.getline(nama, 40);

    cout << "Nilai Pertandingan I : ";
    cin >> A;
    cout << "Nilai Pertandingan II : ";
    cin >> B;
    cout << "Nilai Pertandingan III : ";
    cin >> C;

    rata = (A + B + C) / 3;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya ";

    if (rata >= 70) {
        if (rata >= 85)
            cout << "mendapatkan hadiah Komputer Core i5." << endl;
        else
            cout << "mendapatkan Uang sebesar Rp. 2.500,00." << endl;
    } else {
        cout << "mendapatkan Hiburan." << endl;
    }

    return 0;
}


	

	
	
