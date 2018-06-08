#include <stdio.h>

double ave(int arr[], int len) {
	int total = 0;
	for (int index = 0; index < len; index++) {
		total += arr[index]; // Add up all the numbers
		arr[index] = 0;
	}
	double result = (double)total/len; // Calculate the average
	len = 0;
		return result;
	}
	int main(int argc, char** argv) {
	int numbers[] = {29,5,-7,101,-555}; // Initialize array
	int len = 5;
	// Call function to calculate the average and print it
	printf("The average is %f\n", ave(numbers, len));
	for (int index = 0; index < len; index++) {
		printf("%d ", numbers[index]); // Print out all the numbers
	}
	printf("\n len is %d", len);
}
