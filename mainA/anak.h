#pragma once
#ifndef ANAK_H
#define ANAK_H

class anak {
public:
	string nama;
	anak(string pNama) :nama(pNama) {
		cout << "anak \"" << nama << "\"ada\n";
		~anak() {
			cout << "Anak\"" << nama << "\"tida ada\n";
		}
	}
};
#endif