#include <iostream>
#include <string>
using namespace std;

#include "HeaderJantung.h"
#include "HeaderManusia.h"

int main() {
	manusia* varManusia = new manusia("Eko");
	delete varManusia;
	return 0;
}
