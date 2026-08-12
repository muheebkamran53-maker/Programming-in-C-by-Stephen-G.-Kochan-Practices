#include<stdio.h>
int main (void)
{
    int no_of_digits,temp,number,power,digit;

    
    
    printf("Insert any value: ");
    scanf("%i",&number);
    temp = number;
    no_of_digits = 0;
    do 
    {
      temp = temp / 10;
      no_of_digits = no_of_digits + 1;
    }
    while (temp != 0);
    temp = number;
    power = 1;
    for (int j = 0; j < no_of_digits - 1; j++)
    {
        power = power * 10;
    }
    for (int i = 0; i < no_of_digits; i++)
    {
        digit = temp / power;
        temp = temp % power;
        power = power / 10;
        switch(digit){
            case 0:
            printf("zero ");
            break;
            case 1:
            printf("one ");
            break;
            case 2:
            printf("two ");
            break;
            case 3:
            printf("three ");
            break;
            case 4:
            printf("four ");
            break;
            case 5:
            printf("five ");
            break;
            case 6:
            printf("six ");
            break;
            case 7:
            printf("seven ");
            break;
            case 8:
            printf("eight ");
            break;
            case 9:
            printf("nine ");
            break;
        }
    }
}