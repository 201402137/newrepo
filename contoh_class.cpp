#include <iostream>

using namespace std;

class SimpleCalc {
public:
	float hasil;

public:
	float add(float num1, float num2){
		hasil =  num1 + num2;

		return hasil;
	}
};

int main() {
	float n1, n2;
	cout << "Masukkan dua Angka (dengan spasi): "; cin >> n1 >> n2;

	SimpleCalc C;
	cout << "angka1 + angka2 = " << C.add(n1,n2) << endl;

	return 0;
}