#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAXQ 127
#define ROGUEVALUE '\0'


//Lousy implementation of Quee using array 

typedef struct {
	int head;         // Front of queue
	int tail;         // Back of queue
	char QA[MAXQ];    // Array containing queue data
	} QType;
QType Q;

void initQueue(void) {
	Q.head = Q.tail = 0;
}

bool isEmpty(void) {
	return (Q.head == Q.tail);
}

void enqueue(char ch) {
	int newTail =Q.tail + 1;  // Calculate new tail index
		if (newTail >= MAXQ)
			newTail = 0  ;           // Wrap around
		if (newTail ==   Q.head) {   // Check if queue is full
			printf("Queue is full!");
		}  else {
			Q.tail = newTail;
			Q.QA[Q.tail] =  ch;     // Put item in the queue
		}
	}

char dequeue(void) {
	if (isEmpty()) {
		return ROGUEVALUE;     // Special error value
	} else {
		++Q.head;              // Update head index
		if (Q.head >= MAXQ)
			Q.head = 0;        // Wrap around
			return Q.QA[Q.head];   // Return item
			}
	}




int main(int argc, char** argv ){
	initQueue();

	enqueue('p');
	enqueue('a');
	enqueue('r');
	enqueue('t');
	enqueue('e');
	enqueue('e');
	enqueue('k');
	
//	printf("%d\n%d\n%d", pop(), pop(), pop());
	char temp = dequeue();
	while ( temp != ROGUEVALUE){
		
		printf("%c", temp);
		temp = dequeue();
	}
}



