#include <stdio.h>
#include <stdlib.h>

int main(void){
        char* pt;
        printf("enter string\n");
        pt = malloc(10);
        assert(pt);// test for null values
        scanf("%s", pt);
        printf("%s", pt);
        free(pt);// never forget this

        return 0;
}

