#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define SIZE 256

// returns	 1 for UPPERCASE, 
//        	 2 for lowercase,
//			-1 for anything else
int kindOfAlphabet(char c){
	if( c > 64 && c < 91){
		return 1;
	}else if(c > 96 && c < 123){
		return 2;
	}else {
		return -1; // for non alphabets
	}
}

void encode(char str[]){
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if(kindOfAlphabet(str[i]) == 1){// capital
			str[i] = 'Z' - 	str[i] + 'A';
		}else if (kindOfAlphabet(str[i]) == 2){ //lower case
			str[i] = 'z' - 	str[i] + 'a';
		}else{
			str[i] = '_'; //for invalid chars
		}
	}
}

void print(const char str[]){
	int len = strlen(str);
	printf("Encoded word is: ");
	for (int i = 0; i < len; i++) {
		printf("%c", str[i]);
	}
}
int main(int argc, char** argv ){
	printf("Please enter the word to encode: ");
	char str[SIZE];
	scanf("%s", str);
	encode(str);
	print(str);
} 


