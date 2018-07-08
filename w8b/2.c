#include <stdio.h>
#include <stdlib.h>

int num = 1;
void loops(int);


void loops(int times){
	if(times > 0){
		printf("%d\n", num++);
		loops(--times);
	}
}

int factorial(int val){
	if(val < 1){
		return 1;
	}
	return (val * factorial(val - 1));
}

int main(void){
	printf("%d", factorial(5));
	return 0;
}
