//11.find first and last digit of a number.
#include <stdio.h>

int main()
{
    int n,last,first;
    printf("Enter a number to find first and last of a digit ");
    scanf("%d",&n);
    last=n%10;
    while(n>0){
        if(n<10)
        first=n%10;
        n=n/10;
    }
    printf("first digit is =%d and last digit is=%d",first,last);
    
}
