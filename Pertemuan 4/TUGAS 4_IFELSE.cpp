#include <iostream>
using namespace std;

int main(){
	char nama [40];
	 double A=0, B=0, C=0, mendapatkan;
	
	cout << "Nama Siswa : ";
    cin.getline(nama, 40); 
	
	cout << "Nilai Pertandingan I : ";
	cin >> A;
	
	cout << "Nilai Pertandingan II : " ;
	cin >> B;
	
	cout << "Nilai Pertandingan III : ";
	cin >> C;
	
	cin.ignore();
	
	double rata = (A + B + C) / 3;
	
	cout << "Siswa yang bernama " << nama << endl;
	cout << "Memperoleh nilai rata rata " << rata ;
	cout << " dari hasil perlombaan yang diikutinya";
	
	if(rata >= 85) 
		cout << " mendapatkan hadiah Komputer Core i5" << endl;
	else if (rata>=70)
		cout << " mendapatkan hadiah Uang Sebesar Rp. 2.500.000" << endl;
	else
		cout << " mendapatkan hadiah Hiburan" << endl;
		
	return 0;
	
	
}
