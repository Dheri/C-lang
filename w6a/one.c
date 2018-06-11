#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct student {
char name[50];
int id;
double GPA;
};

int main(int argc, char** argv ){
	
	struct student s1;
	
//	s1.name = "Ishan";
scanf("%s",s1.name);

//	s1.id=8;
	scanf("%d",&s1.id);
//	s1.GPA=4.0;
	scanf("%lf",&s1.GPA);
	
	printf(" name is %s \n id is %d \n GPA is outstanding %g",s1.name,s1.id,s1.GPA);
}


