#include<stdio.h>
int main (void)
{
    int aa[10] = {1,2,3,4,5,6,7,8,9, 10};
    for(int i = 0; i < 10; i++)
    {
        printf("   %i ",aa[i]);
    }
    printf("\n a\n n\n d \n");
    for  (int i = 9; i >= 0; i--)
    {
        printf("   %i ",aa[i]);
    }
    return 0;
}