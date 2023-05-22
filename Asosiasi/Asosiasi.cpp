#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*>daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "Pasien \"" << nama << "\"ada\n";
	}
		~pasien() {
			cout << "Pasien \"" << nama << "\" tida ada\n";
		}
		void tambahDokter(dokter*);
		void cetakDokter();
	
};

class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;
	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "\"ada\n";
	}
	~dokter() {
		cout << "Dokter \"" << nama << "\" tida ada\n";
	}
	void tambahPasien(pasien*);
	void cetakPasien();
};

void pasien::tambahDokter(dokter* pDokter) {
	daftar_dokter.push_back(pDokter);
}

void pasien::cetakDokter() {
	cout << "Daftar Dokter yang menangani \"" << this->nama << "\":\n";
	for (auto& a : daftar_dokter) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

int main() {
	dokter* varDokter1 = new dokter("dr.Budi");
	dokter* varDokter2 = new dokter("dr.Tono");
	pasien* varPasien1 = new pasien("Andi");
	pasien* varPasien2 = new pasien("Lia");


	varDokter1->tambahPasien(varPasien1);
	varDokter1->tambahPasien(varPasien2);
    varDokter2->tambahPasien(varPasien1);

	varDokter1->cetakPasien();
	varDokter2->cetakPasien();
	varPasien1->cetakDokter();
	varPasien2->cetakDokter();

	delete varPasien1;
	delete varPasien2;
	delete	varDokter1;
	delete	varDokter2;
	return 0;





}