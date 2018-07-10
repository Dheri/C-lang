#include "listADT.h"
#include <stdio.h>
int main(void){
	listADT myPhoneBook;
	init(&myPhoneBook);
	
	printf("the nodecount is %d \n", myPhoneBook.nodeCount);
	return 0;
}
