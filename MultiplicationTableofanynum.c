//9.Print Multiplication Table of any number.
#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter a number to find Multiplication Table");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n ,i, n*i);
    }
    return 0;
}