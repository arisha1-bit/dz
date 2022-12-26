#include <iostream>
#include <openssl\mdc2.h>
using namespace std;

int main();



int main()
{
    setlocale(LC_ALL, "ru");                    // корректное отображение Кириллицы
    char decrypted[128] = " ", message[128] = " ", IfFile[128] = " ", OfFile[128] = " ";
    unsigned char userKey[128] = " "; // буфер промежуточного хранения считываемого из файла текста
    int n;

    MDC2_CTX md2;
    unsigned char mdchar[3][100] = { "привет", "пока", "привет" };
    MDC2_Init(&md2);

    MDC2_Final(*mdchar, &md2);

    cout << mdchar;

    unsigned char md[10][MDC2_DIGEST_LENGTH];
    int i;
    MDC2_CTX c;
    static char* text[2] = { "Hello" , "Hello" };



    MDC2((const unsigned char*)s, strlen(s), md[nn])

    MDC2_Update(&c, (const unsigned char*)text[0], strlen(text[0]));
    MDC2_Final(&(md[1][0]), &c);


    // cout << md[1];

    for (i = 0; i < MDC2_DIGEST_LENGTH; i++)
        printf("%02X", md[0][i]);
    printf("\n");

    for (i = 0; i < MDC2_DIGEST_LENGTH; i++)
        printf("%02X", md[1][i]);
    printf("\n");
    int q;
    cin >> q;
}