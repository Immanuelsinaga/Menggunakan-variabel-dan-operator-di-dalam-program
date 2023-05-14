#include <iostream>
#include <cmath>
using namespace std;

int main(){
//	variabel
	int a, b, c, d, e;
	float x, y, z;
	char pilihan;
	
//	input
	cout << "Nama : Immanuel Rey Usmin Sinaga" << endl << "Kelas: X9" << endl << endl;
	cout << "\e[3mMenggunakan Variabel dan operator di dalam program\e[0m" << endl;
	cout << "<=================================================>" << endl << endl;
	cout << "masukan variabel a: ";
	cin >> a;
	cout << "masukan variabel b: ";
	cin >> b;
	cout << "masukan variabel c: ";
	cin >> c;
	cout << "masukan variabel d: ";
	cin >> d;
	cout << "masukan variabel e: ";
	cin >> e;	
	cout << "masukan x: ";
	cin >> x;
	
	
//	Program
	cout << endl << "hitung dengan menggunakan rumus: " << endl;
	cout <<"A. Y = ax^4 + bx^3 + cx^2 + dx + e" << endl << "B. Y = ax^(1/4) + bx^(1/3) + cx^(1/2) + dx + e" << endl;
	cout << endl << "saya ingin mengggunakan rumus (pilih A/B): " ;
	cin >> pilihan;
	
	
	if (pilihan == 'A'){
		y = a*(x*x*x*x) + b*(x*x*x) + c*(x*x) +  d*(x) + e;
		cout << endl << "Hasil Y Menggunakan rumus Y = ax^4 + bx^3 + cx^2 + dx + e"<< endl << "=" << y << endl;
	}else if (pilihan == 'B'){
		y = a * pow(x, 1.0/4.0) + b * pow(x, 1.0/3.0) + c * sqrt(x) + d * x + e;
		cout << endl << "Hasil Z Menggunakan rumus Z = ax^(1/4) + bx^(1/3) + cx^(1/2) + dx + e"<< endl << "=" << y;
	}else if (pilihan == 'a'){
		y = a*(x*x*x*x) + b*(x*x*x) + c*(x*x) +  d*(x) + e;
		cout << endl << "Hasil Y Menggunakan rumus Y = ax^4 + bx^3 + cx^2 + dx + e"<< endl << "=" << y << endl;
	}else if (pilihan == 'b') {
		y = a * pow(x, 1.0/4.0) + b * pow(x, 1.0/3.0) + c * sqrt(x) + d * x + e;
		cout << endl << "Hasil Z Menggunakan rumus Z = ax^(1/4) + bx^(1/3) + cx^(1/2) + dx + e"<< endl << "=" << y;
	}else{
		cout << "Mohon Maaf!!! Tidak tersedia pilihan " << pilihan;
	}
	
//	output
 	
 	return 0;
}
