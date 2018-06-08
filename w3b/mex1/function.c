#include <stdio.h>
#include <stdbool.h> // So we can use 'true'
#include "function.h"
// Prints the sound a dog might make.
// 'dogNum' is the dog number, 'dogWeight' is weight in pounds



//-std=c99 -Wall -Wstrict-prototypes -pedantic-errors

void bark(int dogNum, float dogWeight) {
	if (dogWeight < 10) {
		printf("Dog #%d says Yip! Yip!\n", dogNum);
	} else if (dogWeight < 50) {
		printf("Dog #%d says Ruff! Ruff!\n", dogNum);
	} else {
		printf("Dog #%d says Woof! Woof!\n", dogNum);
	}
}

