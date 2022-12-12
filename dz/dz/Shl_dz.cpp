#include <iostream>
#include <string>
#include "Shl_dz.h"
using namespace std;


bool CheckInput(string input) {
	bool error = false;
	for (int i = 0; i < input.length(); i++) {
		if (isdigit(input[i]) == 0) {
			error = true;
			break;
		}
	}
	if (error)
		return 0;
	return 1;
}

int HashFunction(string data)
{
	int k = std::stoi(data);
	int N = 13; double A = 0.618033;
	int h = N * fmod(k * A, 1);
	return h;
}

int MultiplMethod(string key)
{
	setlocale(LC_ALL, "Rus");
	if (CheckInput(key)) {
		return HashFunction(key);
	}
	else {
		cout << "Error!";
	}
		
}

int main() {
	return 0;
}