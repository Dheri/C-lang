#include <stdio.h>
#define SIZE 5
int main(int argc, char** argv ){
	int array[SIZE];
	
	printf("Please enter number and press enter\n");
	for (int i =0; i < SIZE; i++){
		scanf("%d", &array[i]);
	}
	
	int sum = 0;
	int min = array[0];
	int max = array[0];
	printf("You entered: ");
	for (int i =0; i < SIZE; i++){
		printf("%d, ", array[i]);
		sum += array[i];
		if(min > array[i]){
			min = array[i];
		}
		
		if(max < array[i]){
			max = array[i];
		}
	}
	printf("\nAverage : %f\n" , sum * 1.0 / SIZE);
	printf("Min : %d\n" , min);
	printf("Max : %d\n", max);
}

