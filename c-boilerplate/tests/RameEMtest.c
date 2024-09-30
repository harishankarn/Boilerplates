#include <stdio.h>
#include "minunit.h"
#include "ELO_rating.h"


char* test_Probability() {

	float val = Probability(100,200);
	printf("%f",val);
	mu_assert(val = 0.640065, "Probability should be 0.640065");

	return NULL;
}

char* test_EloRating() {

	EloRating(10.0,20.0,1,true);
	//printf("%f",val);
	//mu_assert(val == 0.640065, "Probability should be 0.640065");
	return NULL;
}
char* test_all() {
	mu_suite_start();
	//mu_run_test(test_Probability);
	mu_run_test(test_EloRating);
	return NULL;
}

RUN_TESTS(test_all)
