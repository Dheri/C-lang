#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void increment(int num){
	num = num + 1;
}
void increment2(int* num){
	*num = *num  + 1;
}

void powers(double num, double* square, double* cube){
	*square = num  * num;
	*cube = num  * num* num;
}
int main(int argc, char** argv ){
	char* str = "today is a nice day";
	char* posS = str;
	char* posF = str + strlen(str) -1;
	// last prt is str + strlen() -1
	while(*posS != '\0'){
		printf(" %c  %c\n", *posS, *posF);
		posS++;
		posF--;
	}
//	double i = 3;
//	double i_sq;
//	double i_cube;
//	powers(i, &i_sq, &i_cube);
//	printf(" %f  %f %f", i, i_sq, i_cube);
}
