#include <stdio.h>

int main(void)
{
	int i = 2;
	int j = 4;

	{	// Open brace starts a new scope
		int i = 3;
		int k = 7;

		printf("i = %d, j = %d, k = %d\n", i, j, k);
	}

	printf("i = %d, j = %d\n", i, j);

	//printf("k=%d\n", k);

	return 0;
}
