//binarysearch

#include<stdio.h>
int main(){

	int n,s,count=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
	
		printf("Enter the array element at index number %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter search element: ");
	scanf("%d",&s);
	
	int l=0;
	int r=n-1;
	int mid = (l+r)/2;
	
	while(l<r){
	
		if(s==arr[mid]){
		
			printf("Element found at %d",mid);
			count=1;
			break;
			
		}
		
		else if(s<arr[mid]){
			r=mid-1;
		}
		
		else{
			l=mid+1;
		}
		
	}
	
	if(count!=1){
		printf("Element not found!");
	}
	
	return 0;
}






