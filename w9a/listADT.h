#ifndef __listADT_h
#define __listADT_h

typedef struct node_def{
	int areaCode;
	int phoneNumber;
	char name[20];
	struct node_def* next; 
}Node;

typedef struct{
	Node* head;
	Node* tail;
	Node* current;
	int nodeCount;
	int currentPosition;
}listADT;

void init(listADT*);
void addList(int, int, char*);
void goToHead(listADT*);

#endif
