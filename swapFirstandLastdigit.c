//13.swap first and last digit of a number
#include <stdio.h>

int main()
{
    int n,last,first,count,swapednum,copynum,rev;
    printf("Enter a number to find first and last of a digit ");
    scanf("%d",&n);
    
    last=n%10;
    copynum=n/10;
    while(n>0){
        count=count+1;
        n=n/10;
    }
    swapednum=swapednum+last*10;
    count=count-1;
    while(count>1 && copynum>0){
        rev=copynum%10;
        swapednum=swapednum*10+rev*10;
        copynum=copynum/10;
        count=count-1;
    }
    swapednum=swapednum+copynum%10;
    printf("After Swapping first and last digit of a number is : %d",swapednum);
    
}
