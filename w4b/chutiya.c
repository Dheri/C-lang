#include <stdio.h>
#include <stdbool.h>
// To guarantee a parameter will never be changed use const

int main(int argc, char** argv) {
	int change[5];// Initialize array
	double moneyOwed = 0;
	double moneyPaid = 0;
	int checkInputOne = 0;
	int checkInputTwo = 0;
	int remaining = 0;
	bool check =true;
// Checking the user input
	do {

		printf("Enter money owned: $");
		checkInputOne = scanf("%lf",&moneyOwed);
		printf("\n");
		printf("Enter money paid: $");
		checkInputTwo = scanf("%lf",&moneyPaid);
		printf("\n");

		if((checkInputOne == 0) || (checkInputTwo==0)) {
			printf("Please Provide the correct input. Please try again\n");
			printf("\n");
			fflush(stdin);
			continue;
		}else if((moneyPaid <= 0) || (moneyOwed <= 0)) {
			printf("The money that you entered in either negative or zero. Please try again\n");
			printf("\n");
			fflush(stdin);
			continue;
		} else if(moneyPaid < moneyOwed) {
			printf("The money that you are paying is not enough. Please try again\n");
			printf("\n");
			fflush(stdin);
			continue;
		}else{
	
			check = false;
		} 
	} while(check);

printf("Change Due $%lf\n",(moneyPaid - moneyOwed));

	change[0] = (int)(moneyPaid - moneyOwed);
	remaining = (moneyPaid - moneyOwed)*100 - change[0]*100 ;

	printf("remaining %d\n",remaining);

	printf("Dollars %d\n",change[0]);
printf("change value %d\n",change[2]);
	while(remaining>=25){
	remaining = remaining - 25;
	change[1]++;
	}
printf("Quarters %d\n",change[1]);
	
	printf("remaining 2 step %d\n",remaining);
		while(remaining>=10){
			printf("remaining 3 step %d\n",remaining);
	remaining = remaining - 10;
	change[2]++;
	}
printf("Dimes %d\n",change[2]);


		while(remaining>=5){
	remaining = remaining - 5;
	change[3]++;
	}
printf("Nickles %d\n",change[3]);
	
		
	change[4] = remaining;
	
printf("Pennies %d\n",change[4]);
}
