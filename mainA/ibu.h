#pragma once
#ifndef IBU_H
#defind IBU_H
class ibu {
public:
	string nama;
	vector<anal*> daftar_anak;

	ibu(string pNama) :nama(pNama) {
		cout << "Ibu\"" << nama"\"ada\n";

	}
	~ibu() {
		cout << "Ibu\"" << nama << "\"tida ada\n";
	}
	void tambahAnak(anak*);
	void cetakAnak();
};
void ibu::tambahAnak(anak* pAnak) {
	daftar_anak.pushback(pAnak)
}
#endif

