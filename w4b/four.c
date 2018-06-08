#include <stdio.h>
#include <string.h>
#define SIZE 256
int main(int argc, char** argv){
	printf("Please enter your string: \n");
	char string[SIZE];
	scanf("%s", string);
	int len = strlen(string);
	for (int i = 0; i < len; i = i+2){
		printf("%c",string[i]);
	}
}
