#include "listADT.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

Node* CreateNode(int, int, char*);

void init(listADT* list){
	list->head = NULL;
	list->tail = NULL;
	list->current= NULL;
	list->nodeCount= 0;
	list->currentPosition = -1;
}

void addList(listADT* list, int areaCode, int phoneNum, char* name){
	Node* newNode = CreateNode( areaCode, phoneNum,  name);
	if(list->head == NULL){
		list->head = list->tail = list->current = newNode;
		list->currentPosition++;
		list->nodeCount++;
	}else{
		list->tail = list->current = newNode;
	}
}

Node* CreateNode(int areaCode, int phoneNum, char* name){
	Node* newNode = malloc(sizeof(Node));
	assert(newNode);
	newNode->areaCode = areaCode;
	newNode->phoneNumber = phoneNum;
	strcpy(newNode->name, name);
	newNode->next = NULL;
	return newNode;
}

void goToHead(listADT* list){
	list->current = list->head;
	list->currentPosition = 0;
	
}



