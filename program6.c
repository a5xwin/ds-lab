//polynomial evaluation.

#include <stdio.h>
#include <math.h>  //importing the math header file which is required to calculate power

struct Poly    //declared a structure called Poly

{
    int coeff;
    int exp;
};

int main(){

    int hd,nt;
    printf("Enter the highest degree of the polynomial: ");   
    scanf("%d",&hd);                   //hd=highest degree of the polynomial
    

    struct Poly poly1[hd];     //declares an array of structures named poly1, where each element of the array poly1 is a structure of type Poly. hd indicates the size of the array.

    printf("Enter the number of terms of the polynomial: ");
    scanf("%d", &nt);                  //nt=number of terms in the polynomial
 
    for(int i=0;i<nt;i++){
    
        printf("Enter the coefficient of term %d in the polynomial: ",i+1);
        scanf("%d", &poly1[i].coeff);
        printf("Enter the degree of term %d in the polynomial: ",i+1);
        scanf("%d", &poly1[i].exp);
    }

    printf("The entered polynomial is: ");
    for (int l=0;l<nt;l++){
    
        printf("%dX^%d+ ", poly1[l].coeff, poly1[l].exp);
    }

    printf("\n");

    int sum=0;

    for(int i=0;i<nt;i++){
        
        sum=sum+pow(z,poly1[i].exp)*poly1[i].coeff;         //z=zero of the polynomial

    }

    return 0;
}