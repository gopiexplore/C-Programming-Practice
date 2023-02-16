//18.find frequency of each digit in a given integer.
#include <stdio.h>
void main(){
    int n,last,i;
    int a[10];
    printf("Enter a number to find frequency each digit");
    scanf("%d",&n);
    while(n>0){
        last=n%10;
        n=n/10;
        a[last]++;
    }
    i=0;
    while(i<10){
        printf("The frequency of %d is %d\n",i,a[i]);
        i++;
    }
}