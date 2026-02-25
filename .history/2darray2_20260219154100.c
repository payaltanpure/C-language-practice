#include <stdio.h>
int main()
{

    int mat1[3][3];
    int mat2[3][3];
    int add[3][3];
  
    printf("\nTake array elements from user for matrix 1:");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            
           scanf("%d", &mat1[i][j]);
            
        }
    }


    printf("\nTake array elements from user for matrix 2:");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            
           scanf("%d", &mat2[i][j]);
            
        }
    }

  
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            add[i][j]= mat1[i][j]+ mat2[i][j];
        }
    }

    printf("\naddition of matrix 1 and matrix 2:\n");
     for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            printf("add[i][j]\t");
        }
    }
    return 0;
}