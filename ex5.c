#include<stdio.h>
#include<stdbool.h>
int main (void)
{
    int p , d; 
    bool isprime;

    for (p = 2; p <= 500; p++ )
    {
        isprime = true;
        for (d = 2; d < p; d++)
        {
        if (p % d == 0)
        isprime = false;
        }

        if(isprime != false)
        printf("%i\n",p);
    }

}