#include <iostream>
#include <string>
using namespace std;
#include "HeaderAnak.h"
#include "HeaderIbu.h"

int main() {
	ibu* varIbu = new ibu("Dini");
	ibu* varIbu2 = new ibu("Novi");
	anak* varAnak1 = new anak("Eko");
	anak* varAnak2 = new anak("Lalu");
	anak* varAnak3 = new anak("Bagus");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

	varIbu->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;

	return 0;
}