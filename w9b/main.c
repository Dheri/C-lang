#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(void) {
	int tmp = 0;
    int MB = 0;
    while (malloc(1<<23)) ++MB;
    printf("Allocated %d MB total\n\n\n", MB);
    printf("Type exit and press Enter to exit program");
	scanf("%d", &tmp);
}
