#include <iostream>
using namespace std;

int main (){
	int I, bil, K=0;
	cout << "Masukkan sebuah bilangan : ";
	cin >> bil;
	
	if (bil < 2 ) {
		cout << "Bukan termasuk bilangan prima" << endl;
	}else{
		for (I = 2; I <= bil/2; I++){
			if (bil%1==0){
				K = 1;
				break; 
			}
		}
		
		if  (K==0)
		cout << "Termasuk bilangan prima"<< endl;
		else 
		cout << "Bukan bilangan prima" << endl;
	}
	return 0;
}
