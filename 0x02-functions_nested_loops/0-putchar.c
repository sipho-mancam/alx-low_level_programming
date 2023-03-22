
#include "main.h"

int main(void)
{
    char txt[] = "_putchar\n";
    int i=0;
    while(txt[i]!=0x00)
    {
        _putchar(txt[i]);
        i++;
    }
    return (0);
}

