#include "main.h"

void print_alphabet(void)
{

    int i=97; 
    char a=97;

    while((a-i)<26)
    {
        _putchar(a);
        a++;
    }
    _putchar('\n');
}
