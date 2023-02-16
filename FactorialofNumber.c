//23.Calculate the factorial of a Number.
#include <stdio.h>
void main(){
    int n,fact=1;
    printf("Enter the number n to find factorial ");
    scanf("%d",&n);
    
    if(n==0){
       printf("The factorial of a number is 1");
    }
    else{
        for(n;n>0;n--){
            fact=fact*n;
        }
        printf("The factorial of a given number is %d",fact);
        
    }
}
