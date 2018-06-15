#include <time.h>
#include <stdio.h>
#define ARR_SIZE 10


typedef struct{
	long int time;
	double temp;
} LogEntry;

LogEntry logs[10];

void recordLog(void){
	for(int i = 0; i < ARR_SIZE; i++){
		printf("please enter Temprature for log entry %d of %d\n ", i + 1, ARR_SIZE);
		scanf("%lf", &logs[i].temp);
		logs[i].time = time(NULL);
	}
}

void printLog(void){
	printf("Temp (sec) \t Temprature (C)\n");
	for(int i = 0; i < ARR_SIZE; i++){
		printf("%li  \t %g\n", logs[i].time, logs[i].temp);
	}	
}

int main(int argc, char** argv){
	recordLog();
	printLog();
}
