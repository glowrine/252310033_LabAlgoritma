#include <iostream>
using namespace std;

int main () {
	float pi, r, t, V;
	pi = 3.14;
	
	cout << "Rumus volume tabung" << endl << endl;
	
	cout << "Diketauhi" << endl;
	cout << "pi = " << pi << endl;
	
	cout << "r = ";
	cin >> r;
	
	cout << "t = ";
	cin >> t;
	
	V = pi * r * r * t;
	
	cout << "\nLangkah pengerjaan" << endl;
	cout << "V = pi * r * r * t" << endl;
	cout << "V = " << pi << " * " << r << " * " << r << " * " << t << endl;
	cout << "V = " << V << endl;
	
	cout << "Hasil volume tabung = " << V;
	
	return 0;
	
	
}
