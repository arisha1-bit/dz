#pragma once
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

unsigned int RSHash(const std::string& str)
{
    unsigned int b = 378551;
    unsigned int a = 63689;
    unsigned int hash = 0;

    for (std::size_t i = 0; i < str.length(); i++)
    {
        hash = hash * a + str[i];
        a = a * b;
    }

    return hash;
}

int method_RS(string key) {
    if (!isInt(key)) {
        setlocale(LC_ALL, "Rus");
        cout << "Не целое число!";
    }
    else {
        return RSHash(key);
    }
}