#include <stdio.h>

int main(void)
{
    int p, d;
    _Bool isPrime;

    printf("2 ");

    for (p = 3; p <= 50; p += 2)
    {
        isPrime = 1;

        for (d = 2; d < p && isPrime != 0; ++d)
        {
            if (p % d == 0)
                isPrime = 0;
        }

        if (isPrime != 0)
            printf("%i\n ", p);
    }

    return 0;
}