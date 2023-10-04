//linear search

#include<stdio.h>
int main(){

	int n,s,count=0;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){

		printf("Enter array element at index number %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the search element: ");
	scanf("%d",&s);
	
	for(int i=0;i<n;i++){
	
		if(arr[i]==s){
			printf("Search element found at index number: %d",i);
			count+=1;
			break;
			}
		}

	if(count==0){
		printf("Search element not found!");
	}
			
	return 0;
}
