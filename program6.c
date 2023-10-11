//polynomial evaluation. (we accept a possible root from the user and checks whether it is actually a zero of the polynomial or not)
//note: zero of polyonimal is same as root.

#include <stdio.h>
#include <math.h>  //importing the math header file which is required to calculate power

struct Poly    //declared a structure called Poly

{
    int coeff;
    int exp;
};

int main(){

    int hd,nt,z;
    printf("Enter the highest degree of the polynomial: ");   
    scanf("%d",&hd);                   //hd=highest degree of the polynomial
    

    struct Poly poly1[hd+1];     //declares an array of structures named poly1, where each element of the array poly1 is a structure of type Poly. hd+1 indicates the size of the array.

    printf("Enter the number of terms of the polynomial: ");
    scanf("%d", &nt);                  //nt=number of terms in the polynomial
 
    for(int i=0;i<nt;i++){
    
        printf("Enter the coefficient of term %d in the polynomial: ",i+1);
        scanf("%d", &poly1[i].coeff);
        printf("Enter the degree of term %d in the polynomial: ",i+1);
        scanf("%d", &poly1[i].exp);
    }

    printf("Enter the zero of the polynomial: ");
    scanf("%d",&z);                                 //z=zero of the polynomial

    printf("The entered polynomial is: ");
    for (int l=0;l<nt;l++){
    
        printf("%dX^%d+ ", poly1[l].coeff, poly1[l].exp);
    }

    printf("\n");

    int sum=0;

    for(int i=0;i<nt;i++){
        
        sum=sum+pow(z,poly1[i].exp)*poly1[i].coeff;     //here the logic is that z is the base term, which will be raised to poly1[i].exp. this whole term is then multiplied with the corresponding coefficient.
                                                        //eg: 3x^2; here coeff=3, exp=2 and z=x. since this polynomial has only 1 term, if the net sum=0; we can say that the value of z which we entered is indeed a root of the polynomial!.
    }

    printf("Evaluation = %d",sum);
    printf("\n");

    if(sum!=0){
        printf("The entered value is not a root of the polynomial!");
    }

    else{
        printf("The entered value is a root of the polynomial!");
    }

    return 0;
}