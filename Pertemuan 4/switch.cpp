#include <iostream>
using namespace std;

int main (){
	char kode;
	
	cout << "Masukkan kode barang [A/B/C] = ";
	cin >> kode;
	
	switch(kode) {
		case 'A':
			cout << "Alat olahraga";
			break;
		case 'B':
			cout << "Alat Elektronik";
			break;
		case 'C':
			cout << "Alat masak";
			break;
		default : 
			cout << "Anda salah masukkan kode";
			break;
			
	}
	getchar();
}
