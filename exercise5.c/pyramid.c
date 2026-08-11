// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int row;
    printf("Enter the height of thr pyramid: ");
    scanf("%i",&row);
    // Question No. 1:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        printf("#");
        printf("\n");
    }
    // Question No. 2:
    for (int i = 0; i < row ; i++)
    {
        for (int j = 1; j < row-i  ; j++)
        {
        printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
        printf("#");
        }
        printf("\n");
    }
    for (int i = 0; i < row ; i++)
    {
        for (int j = 1; j <= row-i  ; j++)
        {
        printf(" ");
        }
        for (int k = -1; k < i*2; k++)
        {
        printf("#");
        }
        printf("\n");
    }
    for (int i = row; i >= 0; i--)
    {
        // for spaces
        for (int j = row-i; j >= 1; j--)
        {
        printf(" ");
        }
        // for hashes(#)
        for (int k = i*2; k > -1; k--)
        {
        printf("#");
        }
        printf("\n");
    }

    return 0;
}