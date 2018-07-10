#include <stdio.h>

void towerOfHanoi(int, int, int, int);

int main(void){
	towerOfHanoi(3,'A','B','C');
	
	return 0;
}

void towerOfHanoi(int rings, int p1, int p2, int p3){ // f t a
	if(rings > 0){
		towerOfHanoi(rings-1, p1, p3, p2);
		
		printf("\n Move disk %d from rod %c to rod %c", rings, p1, p3);
		towerOfHanoi(rings-1, p2, p1, p3);
	}
}
