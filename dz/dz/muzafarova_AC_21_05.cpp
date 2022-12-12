#include "muzafarova_AC_21_05.h"
#include <iostream>
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

int HF(string key) {
	int a = std::stoi(key);
	a *= a; // возвести ключ в квадрат
	a >>= 11; // отбросить 11 младших бит
	return a % 1024; // возвратить 10 младших бит
}

int metod_square(string key) {
	if (!isInt(key)) {
		cout << "Не целое число!";
	}
	else {
		return HF(key);
	}
}