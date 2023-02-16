//19.Enter a number and print it in words.
#include <stdio.h>
void main(){
    int n,x,rev;
    printf("Enter a number to print it in words");
    scanf("%d",&n);
    
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    while(rev>0){
        
        x=rev%10;
        switch(x){
            case 0:printf("Zero ");
            rev=rev/10;
            break;
            case 1:printf("One ");
            rev=rev/10;
            break;
            case 2:printf("Two ");
            rev=rev/10;
            break;
            case 3:printf("Three ");
            rev=rev/10;
            break;
            case 4:printf("Four ");
            rev=rev/10;
            break;
            case 5:printf("Five ");
            rev=rev/10;
            break;
            case 6:printf("Six ");
            rev=rev/10;
            break;
            case 7:printf("Seven ");
            rev=rev/10;
            break;
            case 8:printf("Eight ");
            rev=rev/10;
            break;
            case 9:printf("Nine ");
            rev=rev/10;
            break;
        
        }
        
        
    }
}