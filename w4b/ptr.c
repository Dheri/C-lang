#include <stdio.h>

int main(void){
	int num = 36;
	int * ptr_num = &num;
	printf("   num: %d\n" , num);
	printf("   ptr with d: %d\n" , ptr_num);
	printf("  *ptr is    : %d\n" , *ptr_num);
	
	*ptr_num = *ptr_num + 1;
	ptr_num += 4; //very imp
	*ptr_num = 99;
	printf("\nafter increase\n\n");
	
	printf(" num: %d\n" , num);
	printf(" ptr with d: %d\n" , ptr_num);
	printf("*ptr is    : %d\n" , *ptr_num);
}
