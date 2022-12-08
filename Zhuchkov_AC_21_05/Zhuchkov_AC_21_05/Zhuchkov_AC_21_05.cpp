#include <iostream>

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

int HashFunction(int k)
{
	int N = 1409200314092003; double A = 0.618033;
	int h = N * fmod(k * A, 1);
	return h;
}

void main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	if (argc == 1) {
		cout << "Ошибка\nВведите значение!";
		return;
	}
	for (int i = 1; i < argc; ++i) {
		if (isInt(argv[i])) {
			cout << "HashFunction(" << argv[i] << ")=" << HashFunction(atoi(argv[i])) << endl;
			continue;
		}
		else
		{
			cout << argv[i] << " - Не целое число!" << endl;
			continue;
		}
		cout << "HashFunction(" << argv[i] << ") - Не число!" << endl;
	}
}