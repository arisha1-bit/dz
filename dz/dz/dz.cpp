#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream fin;
	fin.open("Hash_number");
	string number;
	fin >> number;
	return 0;
}