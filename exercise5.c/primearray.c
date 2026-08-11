#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int primes[50], i ,p,primeindex = 2;
    bool isprime;

    primes[0] = 2;
    primes[1] = 3;

    for(p = 5; p <= 50; p++)
    {
    isprime = true;
    for (i = 1; isprime && p / primes[i] >= primes[i] ; ++i)
    if(p % primes[i]==0 )
    isprime = false;

    if (isprime == true){
        primes[primeindex] = p;
        ++primeindex;
    }
    }
    for (i = 0; i < primeindex ;i++)
    printf("%i\n",primes[i]);
    return 0;
}