#include <iostream>
#include <string>
using namespace std;

#include "HeaderJantung.h"
#include "HeaderManusia.h"

//composisi : One to One
//asosiasi : One to One, max Many to Many
//aggregasi : One to one, max one to many
int main() {
	manusia* varManusia = new manusia("Eko");
	delete varManusia;
	return 0;
}
