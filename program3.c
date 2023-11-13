  //Binary search

#include<stdio.h>

int binarySearch(int arr[], int n, int s) {
    
    int l=0;
	int r=n-1;
	
	while(l<=r){

		int mid = (l+r)/2;
	
		if(s==arr[mid]){

            return mid;

		}

		else if(s<arr[mid]){
			r=mid-1;
		}
		
		else{
			l=mid+1;
		}
	}

    return -1;
}

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


    int result = binarySearch(arr, n, s);

    if (result!=-1) {
        printf("Element found at index number: %d", result);
    } 
    
    else {
        printf("Element not found!");
    }


	return 0;
}


