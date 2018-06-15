#include <stdio.h>
#include <stdbool.h>

int myStrLen(const char* str){
	const char* ptr = str;
	int len = 0;
	while(*ptr != '\0'){
		len++;
		ptr++;
	}
	return len;
}

int myStrCmp(const char* str){
	const char* ptr = str;
	int result = 0;
//	while(*ptr != '\0'){
//		len++;
//		ptr++;
//	}
	return result;
}

int main(int argc, char** argv){
	char str[] = "parteek";
	printf("%d", myStrLen(str));
	
}
