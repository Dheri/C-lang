#include "listADT.h"
#include <stdio.h>

void init(listADT* list){
	list->head = NULL;
	list->tail = NULL;
	list->current= NULL;
	list->nodeCount= 0;
	list->currentPosition = -1;
}

void addList(int areaCode, int phoneNum, char* name){
	
}



void goToHead(listADT* list){
	list->current = list->head;
	list->currentPosition = 0;
	
}



