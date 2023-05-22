#pragma once
#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class mausia {
public:
	string name;
	jantung varJantung;
	manusia(string pName)
		:nama(pName) {
		cout << name << "hidup\n";
	}
	~manusia() {
		cout << name << "mati\n";
	}
};
#endif