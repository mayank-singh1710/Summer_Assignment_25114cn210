// Write a program to Count digits in a number.

#include<stdio.h>
int main(){
    int n, i, count;
    printf("enter the number= ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        n=n%10;
        count++;
    }
    printf("count of digits in a number=%d",count);
}