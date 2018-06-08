#include <stdio.h>
#include <stdbool.h>
#define SIZE 10
//{2,0,5,8,9,-8,40,-77,6,9};
void bubbleSort(int array[], int size){
	bool changed = true;
	while(changed){
		changed = false;
		for(int i = 0; i < size - 1; i++){ 
			if(array[i] > array[i+1]){
				int temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
				changed = true;
			}
		}
	}
}

void printArray(const int array[], int len){
	for(int i = 0; i < len; i++){
		printf("%d, " , array[i]);
	}
}

int main(int argc, char** argv ){
	int array[SIZE] = {2,0,5,8,9,-8,40,-77,6,9};
	bubbleSort(array, SIZE);
	printArray(array, SIZE);
}
