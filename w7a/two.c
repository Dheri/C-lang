#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAXVALUE 127
#define ROGUEVALUE -2147483611


//Lousy implementation of Stack using array 
// convert Decimal to Binary and store in stack
typedef struct stack {
int top;
int ST[MAXVALUE];
}Stack;

Stack S;

void push(int n){
	if(S.top == MAXVALUE - 1){
		printf("Stack Overflow\n");
		
	}else{
		++S.top;            // Update top index
		S.ST[S.top] = n;
	}
	
	
}

int pop(void){
	if(S.top == -1 ){
		return ROGUEVALUE;
	}
	int temp = S.ST[S.top];
	S.top--;
	return temp;
}

void init( void){
	S.top =-1;
}
int main(int argc, char** argv ){
	init();

	int num;
	scanf("%d", &num);
	while(num > 0){
		push(num%2);
		num = num/2;
	}

	
//	printf("%d\n%d\n%d", pop(), pop(), pop());
	int temp = pop();
	while ( temp != ROGUEVALUE){
		
		printf("%d", temp);
		temp = pop();
	}
}



