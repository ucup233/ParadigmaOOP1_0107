#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
	string nama;
	vector<dokter*> daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "Pasien \"" << nama"\"";
	}
	~pasien() {
		cout << "Pasien \"" << nama << "\"";
	}

	void tambahDokter(dokter*);
	void cetakDokter();
};
class dokter {
public:
	string nama;
	vector<pasien*> daftar_pasien;

	dokter(string pNama) :nama(pNama) {
		cout << "Dokter \"" << nama << "\"";
	}
	~dokter() {
		cout << "Dokter \"" << nama << "\"";
	}
	void tambahPasien(pasien*);
	void cetakPasien();
};
