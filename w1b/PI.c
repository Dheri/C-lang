#include <stdio.h>
#include <stdbool.h>
double g_PI;
int main(int argc, char** argv)
{
printf("Hello this is PI program\n ");
	g_PI = 355.0/113.0;	
	printf("Your PI is almost %f\n ", g_PI);
	printf("What do you want Pi to be mutiplied with?\n ");
	double multiplier;
	int parsedNumbers = 0;
	while(true){
		parsedNumbers = scanf("%lf", &multiplier);
		if(parsedNumbers == 1){
			double manyPI = g_PI * multiplier;
			printf("many PI is: %f\n  ", manyPI);
			break;	
		}else{
			printf("Error, Try again\n");	
			fflush(stdin);
		}
	}
	return 0;
}
