#include <iostream>
using namespace std;

int main () {
	float pi,  r, L;
	pi = 3.14;
	
	cout << "Rumus Luas Lingkaran" << endl << endl;
	
	cout << "Diketauhi" << endl;
	cout << "pi = " << pi << endl;
	
	cout << "r = ";
	cin >> r;
	
	L = pi * r * r;
	
	cout << "\nLangkah pengerjaan" << endl;
	cout << "L = pi * r * r" << endl;
	cout << "L = " << pi << " * " << r << " * " << r << endl; 
	cout << "L = " << L << endl;	

	cout << "Hasil luas lingkaran = " << L ;
	
	return 0;
}
