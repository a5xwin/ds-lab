//bubblesort

#include<stdio.h>
int main(){
	
	int n;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the array element at index number %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
		
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}	
		}
	}
	
	printf("The sorted array is: \n");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
		printf("\t");		
	}
	
	return 0;
}
