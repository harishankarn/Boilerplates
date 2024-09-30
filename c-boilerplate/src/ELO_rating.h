#ifndef ELO_rating.h
#define ELO_rating.h
#include <stdio.h>
#include <stdbool.h>
float Probability(int rating1, int rating2);
void EloRating(float Ra, float Rb, int K, bool d);
#endif
