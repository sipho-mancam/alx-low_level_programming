#include "main.h"

void times_table(void)
{
    int i=0, j=0;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            if(j*i<10)
            {
                if(j>0){
                    _putchar(' ');
                    _putchar(' ');
                }
                _putchar(i*j+'0');
            }
            else 
            {
                _putchar(' ');
                _putchar((j*i)/10+'0');
                _putchar((i*j)%10+'0'); 
            }

            if(j+1<10)
            {
                _putchar(',');
                
            } 
        }
        _putchar('\n');
    }

}