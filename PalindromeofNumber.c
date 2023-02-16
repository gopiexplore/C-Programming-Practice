
//17.Check whether a number is palindrome or not.
#include <stdio.h>
void main(){
    int n,rev,p;
    
    printf("Enter a Number to find its reverse");
    scanf("%d",&n);
    n=p;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(p==rev){
        printf("The number is palindrome");
    }else printf("The number is not a palindrome");
}