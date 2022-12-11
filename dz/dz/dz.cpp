#include <iostream>
#include <fstream>
#include "muzafarova_AC_21_05.h"
#include "chrono"
using namespace std;
using namespace chrono;
template <typename T>
void run(T name, string number) {
	auto start = steady_clock::now();
	name(number);
	auto end = steady_clock::now();
	duration<double> elapsed_seconds = end - start;
	cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
}
int main() {
	ifstream fin;
	fin.open("Hash_number");
	string number;
	fin >> number;
	run(metod_square, "1234");
	return 0;
}