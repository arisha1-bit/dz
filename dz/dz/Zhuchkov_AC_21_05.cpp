#include <iostream>
#include <string>
#include <vector>

#include "Zhuchkov_AC_21_05.h"

using namespace std;

bool isInt(char str) {
    vector <char> vec;
    vec.push_back('0');
    vec.push_back('1');
    vec.push_back('2');
    vec.push_back('3');
    vec.push_back('4');
    vec.push_back('5');
    vec.push_back('6');
    vec.push_back('7');
    vec.push_back('8');
    vec.push_back('9');

    for (int i = 0; i < vec.size(); ++i) {
        if (str == vec[i]) return 1;
    }
    return 0;
}

long long PolinomHash(string str) {
    
//  P: значением P может быть любое простое число, примерно равное количеству различных используемых символов.
//  Например : если входная строка содержит только строчные буквы английского алфавита, то P = 31 является подходящим значением P.
//  Если входная строка содержит как прописные, так и строчные буквы, то подходящим вариантом является P = 53.
//  M : вероятность столкновения двух случайных строк обратно пропорциональна m.Следовательно, m должно быть большим простым числом.

    const int k = 63;
    const int mod = 1e9 + 7;

    long long hash = 0;
    long long m = 1;

    int exp;

    for (auto sim : str) { 
        
        if (!isInt(sim)) {
            exp = (int)(sim - 'a' + 1);
            cout << exp<< endl;
        }
        else {
            exp = (int)(sim);
        }

        hash = (hash + m * exp) % mod;
        
        m = (m * k) % mod;
    }

    return hash;
}
