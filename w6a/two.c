#include <stdio.h>
int main(int argc, char** argv ){

	
typedef unsigned int uint;
typedef unsigned short int ushort;
typedef unsigned char uchar;

	
	uint num = 5000000000000;
	ushort num2 = 65535;
	uchar ch = 129;
	//signed uchar ch = 125;	
	printf(" %u \n ",num);
	printf("%d \n ",num2);
	printf(" ch is %c \n ",ch);
	printf(" ch is %d \n ",ch);
}
