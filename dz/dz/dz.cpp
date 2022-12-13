#include <iostream>
#include <fstream>
#include "muzafarova_AC_21_05.h"
#include "chrono"
#include "Shl_dz.h"
#include "Zhuchkov_AC_21_05.h"
#include "Header.h"
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
	fin.open("num.txt");
	string number;
	fin >> number;
	run(metod_square, number);
	run(MultiplMethod, number);
	run(PolinomHash, number);
	run(HashRot13, number);
	return 0;
}