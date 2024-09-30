//ELO rating
#include <stdio.h>
#include <stdbool.h> 
#include <math.h>

// Function to calculate the Probability
float Probability(int rating1, int rating2)
{
    return 1/(1+1*pow(10,1.0 * (rating1 - rating2) / 400));
}

// Function to calculate Elo rating
// K is a constant.
// d determines whether Player A wins or Player B.
void EloRating(float Ra, float Rb, int K, bool d)
{

	// To calculate the Winning
	// Probability of Player B
	float Pb = Probability(Ra, Rb);

	// To calculate the Winning
	// Probability of Player A
	float Pa = Probability(Rb, Ra);

	// Case -1 When Player A wins
	// Updating the Elo Ratings
	if (d == 1) {
		Ra = Ra + K * (1 - Pa);
		Rb = Rb + K * (0 - Pb);
	}

	// Case -2 When Player B wins
	// Updating the Elo Ratings
	else {
		Ra = Ra + K * (0 - Pa);
		Rb = Rb + K * (1 - Pb);
	}

	printf("Updated Ratings:-\n");
	printf("Ra = %.2f : Rb = %.2f\n",Ra,Rb);
}

// Driver code
/*int main()
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

}*/
