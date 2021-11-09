#include <iostream>
 
using namespace std;
 
class Laptop {
 
public:
	Laptop() {
		cout << "Object laptop dibuat\n" << endl;
	}

    ~Laptop() {
      cout << "Object laptop sudah di hapus" << endl;
    }
};
 
int main() {

  Laptop LaptopKita;

  return 0;
}