#include <iostream>
using namespace std;

double konversiSuhu(char awal, char tujuan, double nilai) {
    if (awal == 'C' && tujuan == 'F')
        return (nilai * 9.0 / 5.0) + 32;
    else if (awal == 'C' && tujuan == 'K')
        return nilai + 273.15;
    else if (awal == 'F' && tujuan == 'C')
        return (nilai - 32) * 5.0 / 9.0;
    else if (awal == 'F' && tujuan == 'K')
        return (nilai - 32) * 5.0 / 9.0 + 273.15;
    else if (awal == 'K' && tujuan == 'C')
        return nilai - 273.15;
    else if (awal == 'K' && tujuan == 'F')
        return (nilai - 273.15) * 9.0 / 5.0 + 32;

    return 0; // jika input tidak sesuai
}

int main() {
    char awal, tujuan;
    double nilai;

    cout << "Masukkan jenis suhu awal (C/F/K): ";
    cin >> awal;

    cout << "Masukkan nilai suhu: ";
    cin >> nilai;

    cout << "Ingin dikonversi ke (C/F/K): ";
    cin >> tujuan;

    double hasil = konversiSuhu(awal, tujuan, nilai);
    cout << "Hasil konversi suhu: " << hasil << endl;

    return 0;
}

