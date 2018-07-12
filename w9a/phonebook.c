#include "listADT.h"
#include <stdio.h>
int main(void){
	listADT myPhoneBook;
	init(&myPhoneBook);
	printf("the nodecount is %d \n", myPhoneBook.nodeCount);
	addList(&myPhoneBook,416, 12589, "Parteek Dheri");
	printf("the nodecount is %d \n", myPhoneBook.nodeCount);
	return 0;
}
