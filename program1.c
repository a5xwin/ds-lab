//write  a program to perform array operations:  insertion from a specific position, deletion from a specific position, searching, sorting.

#include<stdio.h>

void insert(int arr[] ,int n){
     int o,e;
        printf("Enter the index number where the element should be inserted: ");
        scanf("%d",&o);
        if(o<0 || o>=n){
            printf("Invalid index!");
        }
        else{
            printf("Enter the element which needs to be inserted: ");
            scanf("%d",&e);
            for(int i=n;i>o;i--){
                arr[i]=arr[i-1];
            }
            arr[o]=e;
            n++;
            printf("The updated array is: ""\n");
            for(int i=0;i<n;i++){
                printf("%d",arr[i]);
                printf("\n");
            }
        }
}
void delete(int arr[] ,int n){
    int o,e;
        printf("Enter the index number where the corresponding element should be deleted: ");
        scanf("%d",&o);
        if(o<0 || o>=n){
            printf("Invalid index!");
        }
        else{
            for(int i=o+1;i<n;i++){
                arr[i-1]=arr[i];
            }
            n--;
            printf("The updated array is: ");
            for(int i=0;i<n;i++){
                printf("\t");
                printf("%d",arr[i]);
            }
        }
}
void search(int arr[] ,int n){
        int s,count=0;
        printf("Enter the search element: ");
        scanf("%d",&s);
        for(int i=0;i<n;i++){
            if(arr[i]==s){
                count+=1;
                printf("Element found at index number %d",i);
                printf("\n");
            }
        }
        if(count!=0){
            printf("\n");
        }
        else{
            printf("Element not found");
        }
}
void sort(int arr[] ,int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    int temp =arr[j];
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
}
int main(){
    int n,c;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the array elements: ");
        scanf("%d",&arr[i]);
    }
    printf("Press 1 to perform insertion...\n");
    printf("Press 2 to perform deletion...\n");
    printf("Press 3 to perform searching...\n");
    printf("Press 4 to perform sorting...\n");
    printf("Enter choice: ");
    scanf("%d",&c);
    if(c==1){
        insert(arr, n);
    }
    else if(c==2){
        delete(arr, n);
    }
    else if(c==3){
        search(arr, n);
    }
    else if(c==4){
        sort(arr, n);
    }
    else{
        printf("Invalid choice!");
    }
    return 0;
}