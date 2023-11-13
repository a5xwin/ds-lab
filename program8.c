//input the represenation of 2 sparse matrices, obtain the rep of their sum
//we need to  make 2 matrices: 1) sparse rep of matrix 1; for that we only need number of nonz; cuz arr[nz1+1][3] 
//                              2) sparse rep of matrix 2; for that we only need number of nonz; cuz brr[nz1+1][3] 


/*
if a[i][0] < b[j][0] then place element from matrix a to matrix c, i++

if a[i][0] = b[j][0] &&  if a[i][1] < b[j][1], then place the element from matrix a to matrix c (we compared column), i++

if a[i][0] > b[j][0] then place element from matrix b to matrix c, j++

if a[i][0] = b[j][0] &&  if a[i][1] > b[j][1], then place the element from matrix b to matrix c (we compared column), j++

else simply add a[i][j] and b[i][j], i++, j++*/

#include<stdio.h>

int main(){

    int nz1,nz2;

    printf("Enter number of non-zero elements of first matrix: ");
    scanf("%d",&nz1);

    int arr[nz1+1][3];


    for(int i=0;i<nz1;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element at row: %d, column: %d of the first sparse representation matrix: ",i+1,j);
            scanf("%d",&arr[i][j]);
        }
    }


    printf("Enter number of non-zero elements of second matrix: ");
    scanf("%d",&nz2);

    int brr[nz2+1][3];


    for(int i=0;i<nz2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the element at row: %d, column: %d of the second sparse representation matrix: ",i+1,j);
            scanf("%d",&brr[i][j]);
        }
    }

    int i=0,j=0,k=0;

    int crr[nz1+nz2+1][3];

    while(i<nz1 && j<nz2){

        if((arr[i][0]<brr[j][0]) || ((arr[i][0]==brr[j][0]) && arr[i][1]<brr[j][1])){

                crr[k][0]=arr[i][0];
                crr[k][1]=arr[i][1];
                crr[k][2]=arr[i][2];
                i++;
        }

        else if((arr[i][0]>brr[j][0]) || ((arr[i][0]==brr[j][0]) && arr[i][1]>brr[j][1])){

                crr[k][0]=brr[j][0];
                crr[k][1]=brr[j][1];
                crr[k][2]=brr[j][2];
                j++;
        }
    
        else {
                crr[k][0]=arr[i][0];
                crr[k][1]=arr[i][1];
                crr[k][2]=arr[i][2]+brr[j][2];
                i++;
                j++;
        }

        k++;

    }


    while(i<nz1){
        crr[k][0]=arr[i][0];
        crr[k][1]=arr[i][1];
        crr[k][2]=arr[i][2];
        i++;
        k++;
    }

    while(j<nz2){
        crr[k][0]=brr[j][0];
        crr[k][1]=brr[j][1];
        crr[k][2]=brr[j][2];
        j++;
        k++;
    }


    printf("\nRow\tColumn\tValue\n");

    for(int i=0;i<k;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",crr[i][j]);
        }
        printf("\n");
    }


    return 0;
}



