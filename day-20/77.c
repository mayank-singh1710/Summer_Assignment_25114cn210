//  Write a program to Multiply matrices.

#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d",&r2,&c2);
    
    if(c1!=r2)
    {
        printf("Matrix multiplication is not possible.");
        
    }
    else{
    int i,j,k;
    int a[r1][c1], b[r2][c2], c[r1][c2] ;

    printf("Enter the elements of first matrix: ");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    
    printf("The first matrix is: \n");
    for(i=0;i<r1;i++)    {
        for(j=0;j<c1;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }


    printf("Enter the elements of second matrix: ");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    printf("The second matrix is: \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    // Multiplying the two matrices
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<c1;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }

    printf("The product of the two matrices is: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }

    }

    return 0;
}