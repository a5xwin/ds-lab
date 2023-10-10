//Selection sort

#include <stdio.h>

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){              //we used n-1 cuz when we sort (n-1) elements, then the nth element automatically gets sorted.
        int min=i;
        for(int j=i+1;j<n;j++){          //we used i+1 cuz the ith element is already sorted
            if(arr[j]<arr[min]){
                min=j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

        // To print the current pass
        printf("Array after iteration number %d: ",i+1);
        for(int k=0; k<n;k++){
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        printf("Enter the array element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    selectionSort(arr, n);

    printf("The sorted array is: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
