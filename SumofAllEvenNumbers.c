//7.Find sum of all even numbers between 1 to n.
#include <stdio.h>
void main(){
    int n,sum,i;
    printf("Enter n to find all even numbers sum 1 to n ");
    scanf(" %d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;  
        }
    }
    printf("%d ",sum); 
}
