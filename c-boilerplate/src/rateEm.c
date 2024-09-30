#include<stdio.h>
#include "ELO_rating.h"
int main()
{
    float Ra, Rb;
        // Ra and Rb are current ELO ratings
    printf("Enter rating of player 1:");
    scanf("%f",&Ra);

    printf("Enter rating of player 2:");
    scanf("%f",&Rb);

        int K = 30;

    int x;
    bool d;
    printf("Press 1 if player 1 wins else press anything else\n");
    scanf("%d",&x);
    if (x==1)
             d = 1;
    else
         d = 0;

        // Function call
        EloRating(Ra, Rb, K, d);

    return 0;

}

