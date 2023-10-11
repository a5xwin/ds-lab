//polynomial addition

#include <stdio.h>

struct Poly    //declared a structure called Poly

{
    int coeff;
    int exp;
};

int main(){

    int hd1,hd2;
    printf("Enter the highest degree of the first polynomial: ");   
    scanf("%d",&hd1);                   //hd1=highest degree of 1st polynomial
    
    printf("Enter the highest degree of the second polynomial: ");  //highest degree of 2nd polynomial
    scanf("%d",&hd2);                  //hd2=highest degree of 2nd polynomial

    struct Poly poly1[hd1+1];     //declares an array of structures named poly1, where each element of the array poly1 is a structure of type Poly. hd1+1 indicates the size of the array.
    struct Poly poly2[hd2+1];
    struct Poly sum[hd1+hd2+1];
    
    int nt1,nt2;

    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &nt1);                  //nt1=number of terms in 1st polynomial
 
    for(int i=0;i<nt1;i++)
    
    {
        printf("Enter the coefficient of term %d in the first polynomial: ",i+1);
        scanf("%d", &poly1[i].coeff);
        printf("Enter the degree of term %d in the first polynomial: ",i+1);
        scanf("%d", &poly1[i].exp);
    }

  
    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d", &nt2);                  //nt2=number of terms in 2nd polynomial
    
    for (int i=0; i<nt2;i++){
        
        printf("Enter the coefficient of term %d in the second polynomial: ",i+1);
        scanf("%d", &poly2[i].coeff);
        printf("Enter the degree of term %d in the second polynomial: ",i+1);
        scanf("%d", &poly2[i].exp);
    }

    int i=0,j=0,k=0;

    while (i<nt1 && j<nt2){       //When i becomes equal to or greater than nt1, then all terms in poly1 have been processed, and the loop will stop.
                              //Similarly when j becomes equal to or greater than nt2, then all terms in poly2 have been processed, and the loop will stop.
        if (poly1[i].exp == poly2[j].exp){   //we can only add 2 terms from 2 polynomials, when they have same exponent(degree). so when i'th exponent of poly1 becomes equal to j'th exponent of poly2;
        
            sum[k].coeff = poly1[i].coeff + poly2[j].coeff;     //the i'th coeff from poly1 and j'th coefficient from poly2 are added.
            sum[k].exp = poly1[i].exp;                          //now we also need to display a degree term (exponential term) in front of the sum of i'th and j'th coefficients. eg: 5a+7b=12(a+b), we need to show this a+b. Now since we can add 2 terms of 2 polynomials only when their degree terms are equal; we can select any degree term to be shown with the sum of ith and jth coeff. ie, we can either choose poly1[i].exp or poly2[j].exp
            i++;
            j++;
            k++;
        }
        else if (poly1[i].exp>poly2[j].exp){      //if the ith term from poly1 has a greater degree than the corresponding jth term from poly2, then:
        
            sum[k].coeff = poly1[i].coeff;   //here, sum will only be equal to coefficient from poly1 term. (ie, we can take sum from coeff. of both polynomials only when their degree are equal)
            sum[k].exp = poly1[i].exp;       //we displayed the degree term of ith element from poly1
            i++;
            k++;
        }
        else{
            sum[k].coeff = poly2[j].coeff;      //here, sum will only be equal to coefficient from poly2 term.
            sum[k].exp = poly2[j].exp;          //we displayed the degree term of jth element from poly2
            j++;
            k++;
        }
    }
    
    printf("Polynomial 1: ");
    for (int l=0;l<nt1;l++){
    
        printf("%dX^%d+ ", poly1[l].coeff, poly1[l].exp);
    }
    printf("\n");
    
    
    printf("Polynomial 2: ");
    for (int m=0;m<nt2;m++){
    
        printf("%dX^%d+ ", poly2[m].coeff, poly2[m].exp);
    }
    printf("\n");
    
    

    printf("Resultant Expression: ");
    for (int n=0;n<k;n++){
    
        printf("%dX^%d+ ", sum[n].coeff, sum[n].exp);
    }
    printf("\n");

    return 0;
}

