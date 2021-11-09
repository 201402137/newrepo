#include <iostream>

using namespace std;

int main() {

	string nama;
	int umur;
	
	cout << "Masukkan nama Anda: ";
	getline(cin, nama);

	cout<< "Masukkan umur Anda: ";
	cin >> umur;

	cout << "\nHallo " << nama << " " << umur << " tahun" << endl;

	return 0;
}