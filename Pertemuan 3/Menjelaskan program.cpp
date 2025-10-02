#include <iostream> //agar input dan output bisa berjalan 
using namespace std; //biar cin dan cout bisa dipakai tanpa nulis std::

int main () { //program utama agar semua program bisa berjalan
	//inisialisasi variabel
	int x = 50; //memasukkan angka kedalam x
	
	int a, b, c, d, e;  // variabel untuk menyimpan hasil operasi
	//proses
	a = x > 5+5; //rumus untuk mengecek apakah x lebih besar dari 5+5, 
	b = x > 100; //rumus untuk mengecek apakah x lebih besar dari 100
	c = a&&b; //rumus AND, membandingkan hasil dari nilai a dan b
	d = a||b; //rumus OR, membandingkan hasil dari nilai a atau b
	e = !(c); //rumus NOT, membalikkan hasil nilai c (kalau benar jadi salah dan sebaliknya)
	
	//output berupa 1 (benar) dan 0 (salah) 
	cout << "\nNilai a = x > 5 + 5 = " << a << endl; //menampilkan rumus dan hasilnya ke layar, jadi x > 5+5 = 50 > 10 = 1 (benar)
	cout << "\nNilai b = x > 100 = " << b << endl; //menampilkan rumus dan hasilnya ke layar, jadi x > 100 = 50 > 100 = 0 (salah)
	cout << "\nNilai c = a&&b = " << c << endl; //menampilkan rumus dan hasilnya ke layar, a&&b = 1 dan 0 hasilnya 0
	cout << "\nNilai d = a||b = " << d << endl; //menampilkan rumus dan hasilnya ke layar, a||b = 1 atau 0 hasilnya 1
	cout << "\nNilai e = !(c) = " << e << endl; //menampilkan rumus dan hasilnya ke layar, !(c) = !(0) hasilnya 1 
	
	getchar(); //menunggu untuk di enter agar bisa menutup program
}
