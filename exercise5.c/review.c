#include<stdio.h>
int main (void)
{
    int i, response,ratingcounter[11] = {0};
    for (i = 1; i <= 20 ; i++)
    {
        printf("Enter your response:");
        scanf("%i",&response);
        if(response < 1 || response > 10 )
        printf("bad response");
        else
        ++ratingcounter[response];
    }
    printf ("\n\nRating Number of Responses\n");
    printf ("------ -------------------\n");
    for (i = 0; i <= 10; i++){
        printf ("%i %i\n", i, ratingCounters[i]);
    }
    return 0;
}