#include<stdio.h> 
#include<stdbool.h>
int main (void)
{
    int array[6],i;
    int sum = 0;

    for(i = 0; i < 6 ;  i++)
    {
    printf("Enter any value: ");
    scanf("%i",&array[i]);
    }
    int smallest = array[0];
    for (i = 1; i < 6; i++)
    {

    if (smallest > array[i])
    smallest = array[i];
    }
    printf("The smallest number in this array is %i",smallest);
    return 0;
}