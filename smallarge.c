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
    int largest = array[0];
    for (i = 1; i < 6; i++)
    {

    if (smallest > array[i])
    smallest = array[i];
    }
    for (i = 1; i < 6; i++)
    {

    if (largest < array[i])
    largest = array[i];a
    }
    printf("The smallest number in this array is %i\n",smallest);
    printf("The largest number in this array is %i",largest);
    
    return 0;
}