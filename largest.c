#include<stdio.h> 
#include<stdbool.h>
int main (void)
{
    int array[6],i;
    int sum = 0;
    bool large;
    for(i = 0; i < 6 ;  i++)
    {
    printf("Enter any value: ");
    scanf("%i",&array[i]);
    }
    int largest = array[0];
    for (i = 0; i < 6; i++)
    {
    large = true;
    if (largest < array[i])
    largest = array[i];
    }
    printf("The largest number in this array is %i",largest);
    return 0;
}