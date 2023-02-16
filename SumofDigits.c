//14.Calculate sum of digits of a number.
#include <stdio.h>

int main()
{
    int n,l,sum;
    printf("Enter a number to sum of digits of a number ");
    scanf("%d",&n);
    while(n>0){
        l=n%10;
        sum=sum+l;
        n=n/10;
    }
    printf("The sum of digits is %d",sum);
}
