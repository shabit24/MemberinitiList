#pragma once
#ifndef IBU_H
#defind IBU_H
#include <iostream>
#include <anak.h>
#include <vector>
using namespace std;


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
void ibu::cetakAnak() {
	cout << "Daftar anak dari ibu\"" << this->nama << "\":n";
	for (auto& a : daftar_anak) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
#endif

