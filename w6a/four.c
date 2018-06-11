	#include <stdio.h>
	#include <stdbool.h>
	#include <string.h>
	
	
	typedef struct {
	char first[21];
	char middle;
	char last[21];
	} Name;
	
	typedef struct {
	int day;
	int month;
	int year;
	} Date;
	
	typedef struct {
	Name name;
	int id;
	double GPA;
	Date birthDate;
	} Student;
	
	int main(int argc, char** argv ){
		
		 Student st;
		
	printf("Please enter name, ID, and GPA")
	scanf("%s %c %s",st.name.first,& st.name.first,st.name.first);
	scanf("%d %lf",&st.id,&st.GPA);
	scanf("%d %d %d",&st.birthDate.day,&st.birthDate.month,&st.birthDate.year);
	
	
	
		scanf("%d",&s1.id);
	
		scanf("%lf",&s1.GPA);
		
		
		printf(" name is %s \n id is %d \n GPA is outstanding %g",s1.name,s1.id,s1.GPA);
	}
	
	

