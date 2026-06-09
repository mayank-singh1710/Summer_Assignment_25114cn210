// Write a program to Find factorial of a number.

#include<stdio.h>
int main(){
    int n, i, fact=1;
     printf("enter the number=");
     scanf("%d",&n);

     for(i=0; i<=n; i++){
        if(i==0||i==1){
            fact=1;
        }
        else{
            fact*=i;
        }
     }
     printf("factorial of a number=%d",fact);
     return 0;

}