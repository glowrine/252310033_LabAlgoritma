#include <iostream>
using namespace std;

int main (){
	int number = 0;
	int sum = 0;
	
	do {
		sum += number;
		cout << " Masukkan angka: ";
		cin >> number ;
	}
	while (number >= 1); // akan berkahir saat input angka 0
	
	cout << "\nHASIL PENJUMLAHANNYA ADALAH " << sum << endl;
	return 0;
}
