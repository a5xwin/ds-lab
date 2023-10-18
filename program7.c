
//sparse matrix representation
//sparsity= number of zero-valued elements divided by the total number of elements


/*
first we accept the number of rows (r) and columns (c) from the user.
then we create a 2d array arr[r][c]
now using for loop, we accept elements into this array
now we know that in sparse matrix representation, there will be nonz+1 number of rows and 3 columns always. (nonz+1=number of non 0 elements)
therefore we create another 2d array brr[nonz+1][3]
now using for loop, we can get all non-zero elements in arr and then store the value of their columns and rows;
then finally from this we create brr*/

//note: in a sparse matrix; we start from row0 and column0 instead of row1 and column1

#include <stdio.h>

int main(){

    int r;
    int c;

    printf("Enter number of rows of the matrix: ");
    scanf("%d",&r);

    printf("Enter number of columns of the matrix: ");
    scanf("%d",&c);

    int arr[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at row: %d, column: %d of the matrix: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    int nonz=0;
    for(int i=0;i<r;i++){
    	for(int j=0;j<c;j++){
    		if(arr[i][j]!=0){
    			nonz+=1;
    		}
    	}
    }
    
    int brr[nonz+1][3];
    
    brr[0][0]=r;
    brr[0][1]=c;
    brr[0][2]=nonz;
    
    int k=1;
    
    for(int i=0;i<r;i++){
        for(int j=0; j<c;j++){
            if(arr[i][j]!=0){
            	brr[k][0]=i;
            	brr[k][1]=j;
            	brr[k][2]=arr[i][j];
            	k+=1;
            }  
        }
    }
        
    printf("Sparse Matrix Representation: \n");
    
      for(int i=0;i<nonz+1;i++){
        for(int j=0; j<3;j++){
        	printf("%d ",brr[i][j]);
        }
        printf("\n");
      }
      
      float rc=r*c;
      float numerator=rc-nonz;
      float spa=numerator/rc;  
      
      printf("Sparsity of the entered matrix is: %f",spa);
      printf("\n");
      
      
    return 0;
}
