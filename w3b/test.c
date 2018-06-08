#include <stdio.h>
#include <stdlib.h>
void main(){
	int Occurance[27]={ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 };
	char Letter[27]=  {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
	FILE *fp;
	char ch;
	int j;
	int count=0;
	fp=fopen("IronHeel.txt","r");
	while(1){
		int i;
		ch=fgetc(fp);
		for(i=0;i<=25;i++)
		{if(ch==(char)(37)){
			++count;
			Occurance[26]++;
			printf("%f  ,%c ____",count,(char)(37));
		}
			if(ch==Letter[i]|| tolower(ch)==Letter[i])
			{
			Occurance[i]++;
			}
			/*else if(ch=='1'){
				Occurance[26]++;
							}
			*/
		}
		if(ch==EOF)
		break;
	}
	for(j=0;j<=25;j++){
		printf("\n %c has %d occurances ",Letter[j],Occurance[j]);
	}
		printf("\n Space has %d occurances %d ",Occurance[26],count);
		getch();
}
