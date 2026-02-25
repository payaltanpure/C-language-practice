#include<stdio.h>
int main()
#define max 20
{
    int r1,c1,r2,c2, choice;
    int max3=[max][max];
    printf("\nEnter no of rows and columns for matrix1:");
    scanf("%d%d", &r1, &c1);
    int mat1[max][max];
    printf("\nEnter no of rows and columns for matrix2:");
    scanf("%d%d", &r1, &c2);
    int mat2[max][max];
    printf("\nMenu:");
    printf("\n1.Addition of 2 matrix \n2.Multiplication of 2 matrix \n3.Transpose of 2 matrix ");
    printf("\nEnetr your choice:");
    scanf("%d", & choice);
    return 0;
}