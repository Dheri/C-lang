#include <stdio.h>
#include <stdlib.h>
#define LENGTH 100000

int binarySearch(int arr[], int start, int end, int* numOfComparisons, int target)
{
	(*numOfComparisons)++;
   if (end >= start)
   {
        int mid = start + (end - start)/2;

        if (arr[mid] == target) {
        	return mid;
		}
            
        if (arr[mid] > target){
        	return binarySearch(arr, start, mid-1, numOfComparisons, target);
		}
            
        return binarySearch(arr, mid+1, end, numOfComparisons, target);
   }
 
   // We reach here when element is not 
   // present in array
   return -1;
}

void adx_store_data(const char *filepath, const char *data)
{
    FILE *fp = fopen(filepath, "abagaad");
    if (fp != NULL)
    {
        fputs(data, fp);
        fclose(fp);
    }
}
int main()
{
	int n[LENGTH];
	int num=0;
	int j;
	for(j=0;j<LENGTH;j++){
		n[j]=num++;
	}
	int tar;
	printf("enter the target\n");
	scanf("%d",&tar);
	int numOfComparisons = 0;
	printf("The position of %d is %d \n ",tar,binarySearch(n,0,LENGTH-1, &numOfComparisons, tar) );
	printf("num of comparions were: %d", numOfComparisons);
	adx_store_data("abc", "abc");
	
//	int counter = 0;
//	int size = 1
//	while(true){
//	if (size > n)
//		return counter;
//	}
//	 size = size * 2;
//	 counter ++;
}



