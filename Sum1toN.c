//6.Print sum of all natural numbers between 1 to n
#include <stdio.h>

void main()
{
    int n,i,sum;
    printf("Enter number N to find sum 1 to N ");
    scanf("%d",&n);
   
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d ",sum);
}