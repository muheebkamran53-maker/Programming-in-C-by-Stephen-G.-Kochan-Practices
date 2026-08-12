#include<stdio.h>
int main (void)
{
    int i , fib[20];
    fib [0] = 0;
    fib [1] = 1;
    for (i = 2; i < 20; i++)
     fib[i] = fib[i-2] + fib[i-1];
    for(i = 0; i < 20; i++)
    printf("%4i: %4i\n",i,fib[i]);
return 0;
}