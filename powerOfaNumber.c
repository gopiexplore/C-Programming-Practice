//21.Find power of a number using for loop
#include <stdio.h>
void main(){
    int base,exponent,i,power=1;
    printf("Enter the base of a number\n");
    printf("Enter the exponent of a Number");
    scanf("%d %d",&base,&exponent);
    for(i=1;i<=exponent;i++){
        power=power*base;
    }
    printf("The power of a Number is %d",power);
}