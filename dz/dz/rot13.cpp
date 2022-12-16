#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
unsigned int HashRot13(string a)
{
    const char* str = a.c_str();
    unsigned int hash = 0;

    for (; *str; str++)
    {
        hash += (unsigned char)(*str);
        hash -= (hash << 13) | (hash >> 19);
    }

    return hash;

}
