#include "muzafarova_AC_21_05.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;


bool isInt(string str) {
	bool err = false;
	for (int i = 0; i < str.length(); i++) {
		/*cout « isdigit(str[i]) « " " « str[i] « "\n";*/
		if (isdigit(str[i]) == 0) {
			err = true;
			break;
		}
	}
	if (err)
		return 0;
	return 1;
}

string HF(string key) {
	unsigned int a = std::stoi(key);
	a *= a;
	string a1, a2, a3, a4, a0;
	string stra = to_string(a);
	a0 = "0000";
	if (stra.length() < 4) {
		stra = a0 + stra;
	}
	a1 = stra[stra.length() / 2 - 2];
	a2 = stra[stra.length() / 2 - 1];
	a3 = stra[stra.length() / 2];
	a4 = stra[stra.length() / 2 + 1];
	return a1 + a2 + a3 + a4;
}

string metod_square(string key) {
	if (!isInt(key)) {
		setlocale(LC_ALL, "Rus");
		cout << "Не целое число!";
	}
	else {
		return HF(key);
	}
}