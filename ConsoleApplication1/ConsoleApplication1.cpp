#include <iostream>
#include <string>

class mahasiswa {
private:
	const int id;
	string nama;
	float nilia;
	
public:
	mahasiswa(int pId, string pNama, float pNilia) :id(pId, nama(pNama), nilia(pNilia){

	}
	~mhasiswa() {
		cout << "Id = " << id << endl;
		cout << "Nama = " << nama << endl;
		cout << "Nilia = " << nilia << endl;
	}
};

int main() {
	mahasiswa mhs(12, "Lia, 90.5");
	return 0;

}
