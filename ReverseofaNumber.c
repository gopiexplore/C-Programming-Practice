//16.Enter a number and print the reverse.
#include <stdio.h>
void main(){
    int n,rev;
    printf("Enter a Number to find its reverse");
    scanf("%d",&n);
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("The reverse of a Number is %d",rev);
}