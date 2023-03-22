#include "main.h"


void print_number(int n);

void print_to_98(int n)
{

    if(n > 98)
    {
        /* Subtract till you get to 98*/
        while(n >= 98)
        {
            print_number(n);
            n -= 1;
        }
       
    }
    else
    {
        /* Add till you get to 98*/
        while(n <= 98)
        {
            print_number(n);
            n +=1;
        }
    }
     _putchar('\n');
}


void print_number(int n)
{
    
   /* if a number is negative. we need to make it positive then print it.*/
   if(n < 0)
   {
    _putchar('-');
    n *= -1;
   }

   if(n < 10)
   {
        _putchar('0'+n);
        _putchar(',');
   }else
   {

    char digits[10] = {0, };
    int i=0, cur = n, counter = 0;

    for(i=cur; i>0; )
    {
        /* get the remainder,(last digit), divide by 10 and do it again*/
        digits[counter] = cur%10;
        counter++;
        cur -= (cur%10);
        cur /= 10;
        i = cur;
    }
    for(i=counter-1;i>=0; i--)
    {
        _putchar(digits[i]+'0');
    }
    _putchar(',');
   }
}