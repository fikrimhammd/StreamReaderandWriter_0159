#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {

	//untuk menyimpan data berbentuk string
	string baris;

	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//Loop akan berhenti jika anda memasukkan karakter 4
		if (baris == "q") break;
		//menulis dan memasukka nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	