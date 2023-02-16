//10.Count number of digits in a number.
#include <stdio.h>
void main(){
    int n,count;
    
    printf("Enter a number to find Number of digits");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count=count+1;
    }
    printf("The number of digits in a number is: %d",count);
}
