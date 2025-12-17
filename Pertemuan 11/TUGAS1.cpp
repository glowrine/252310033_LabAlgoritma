#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int A = 5, B = 10;

    cout << "Sebelum ditukar:" << endl;
    cout << "A = " << A << ", B = " << B << endl;

    tukar(&A, &B);

    cout << "Sesudah ditukar:" << endl;
    cout << "A = " << A << ", B = " << B << endl;

    return 0;
}

