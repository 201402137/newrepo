#include <iostream>

using namespace std;

class SalamSapa {
public:
	string nama;
	int umur;

	SalamSapa(string n, int u) {
		nama = n;
		umur = u;

		cout << "Hallo " << nama << ", " << umur << " tahun" << endl;
	}
};

int main() {
	string name = "mxl10";
	int age = 19;

	SalamSapa salam(name, age);

	return 0;
}