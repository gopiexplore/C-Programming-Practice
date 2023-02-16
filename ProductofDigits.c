//15.Calculate product of digits of a number.
#include <stdio.h>

int main()
{
    int n,l,product=1;
    printf("Enter a number to sum of digits of a number ");
    scanf("%d",&n);
    while(n>0){
        l=n%10;
        product=product*l;
        n=n/10;
    }
    printf("The product of digits is %d",product);
}
