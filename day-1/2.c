// Write a program to Print multiplication table of 
// a given number. 

#include<stdio.h>
int main(){
    int  n, i, s;
    printf("enter the multiplication table of a number=");
    scanf("%d",&n);

    for(i=1; i<=10; i++){
        s= n*i;
        printf("%d * %d = %d\n",n,i,s);
    }
    
    return 0;

}