//2. Print all natural numbers in reverse (from n to 1)
#include <stdio.h>
void main()
{
    int n;
    printf("Enter a Number n to print natural number in reverse order ");
    scanf("%d",&n);
    for(n;n>0;n--){
        printf("%d ",n);
    }
}
