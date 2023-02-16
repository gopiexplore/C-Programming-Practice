//24.C Program to find HCF(GCD) of two numbers.
#include <stdio.h>
void main(){
    int a,b,gcd,i;
    printf("Enter two numbers to Find The HCF/GCD ");
    scanf("%d %d",&a,&b);
    //what ever the number may be greater or smaller it doesn't matter because it must be in common
    //so i decided to take a referece
    //you can do with min or max or b also next time you do 
    //12=1,2,3,4,6,12
    //6=1,2,3,6
    //Hcf=common in both 6
    for(i=1;i<a;i++){
        if(a%i ==0 && b%i==0){
            gcd=i;
        }
        
    }
    printf("The GCD/HCF of given two numbers is %d ",gcd);
}
