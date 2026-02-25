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

    printf("\nArray elements taken from user:\n");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            printf("%d \t", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}