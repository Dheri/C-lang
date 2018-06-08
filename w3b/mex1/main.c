#include <stdio.h>
#include <stdbool.h> 
#include "function.h"

int main(int argc, char** argv) {
	float weight = 0;
	int count = 0;
	while (true) { // Loop until 'break'
// Prompt for input and read the weight in pounds
		printf("Enter the weight of dog %d: ", ++count);
		scanf("%f", &weight);
		if (weight == 0)
			break; // Quit if weight is 0
		bark(count, weight);
		printf("\n"); // Leave a blank line
	}
	return 0;
}
