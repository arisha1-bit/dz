#include <iostream>

using namespace std;

bool isInt(string str) {
    bool err = false;
    for (int i = 0; i < str.length(); i++) {
        /*cout << isdigit(str[i]) << " " << str[i] << "\n";*/
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
    int N = 177; double A = 0.618033;
    int h = N * fmod(k * A, 1);
    return h;
}

void metod_umnojeniya(string num)
{
    setlocale(LC_ALL, "Rus");
    if (!isInt(num)) {
        cout << "ќшибка\n¬ведите число";
        return;
    }
    return HashFunction(atoi(num.c_str()));
}