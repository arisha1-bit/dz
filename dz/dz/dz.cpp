#include <iostream>
#include <fstream>
#include "muzafarova_AC_21_05.h"
#include "chrono"
#include "Shl_dz.h"
#include "Zhuchkov_AC_21_05.h"
#include "Header.h"
using namespace std;
using namespace chrono;
using hash_func = string (*) (string p);
void run(hash_func f, string number, string name) {
	auto start = steady_clock::now();
	f(number);
	auto end = steady_clock::now();
	cout << name << ": elapsed time: " << duration_cast<microseconds>(end-start).count() << "mcs\n";
}


int main() {
	ifstream fin;
	fin.open("num.txt");
	string number;
	fin >> number;
	run(metod_square, number, "midsquare technique");
	run(MultiplMethod, number,"multiplication method");
	run(PolinomHash, number,"polynomial hashing");
	run(HashRot13, number, "ROT 13");

	/*string base_hash = MultiplMethod("99823686");
	int count = 0;
	string new_hash;

	do {
		new_hash = MultiplMethod(to_string(rand()));
		if (base_hash != new_hash) { 
			count += 1;
		}

		cout << count << ' ' << new_hash << ' ' << base_hash << endl;
	} while (base_hash != new_hash);

	cout << count << endl;*/

	return 0;
}