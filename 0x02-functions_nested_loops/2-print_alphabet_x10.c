#include "main.h"


void print_alphabet_x10(void)
{
    int i;
    char a = 97;
    for(i=0; i<10; i++)
    {
        while((a-97)<26)
        {
            _putchar(a);
            a++;
        }
        a = 97; /* reset a to start again ...*/ 
        _putchar('\n');

    }

}