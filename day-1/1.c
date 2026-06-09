//Write a program to Calculate sum of first N 
//natural numbers. 

#include<stdio.h>
int main(){
    int n, i, sum=0 ;
    printf("enter the natural number=");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        sum += i;
    }
    
    printf("Sum of first N natural number=%d",sum);
    return 0;
}