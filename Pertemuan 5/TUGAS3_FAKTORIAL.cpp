#include <iostream>
using namespace std;

int main() {
    int n, i, faktorial;
    char ulang;

    do {
        cout << "Masukkan bilangan: ";
        cin >> n;

        faktorial = 1;
        i = 1;

        while (i <= n) {
            faktorial = faktorial * i;
            i++;
        }

        cout << "Hasil " << n << "! = " << faktorial << endl;

        cout << "Ulangi lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
