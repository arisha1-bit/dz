#include <iostream>
#include <fstream>
#include "muzafarova_AC_21_05.h"
#include "chrono"
#include "Shl_dz.h"
#include "Zhuchkov_AC_21_05.h"
using namespace std;
using namespace chrono;
template <typename T>
void run(T name, string number) {
	auto start = steady_clock::now();
	name(number);
	auto end = steady_clock::now();
	cout << "elapsed time: " << duration_cast<microseconds>(end-start).count() << "mcs\n";
}
int main() {
	ifstream fin;
	fin.open("Hash_number");
	string number;
	fin >> number;
	run(metod_square, "12345");
	run(MultiplMethod, "12345");
	run(PolinomHash, "1234767677687755456787985");
	return 0;
}