#include <stdio.h>
int main()
{

    int mat1[3][3];
  
    printf("\nTake array elements from user for matrix 1:");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            
           scanf("%d", &mat1[i][j]);
        }
    }
  
    for (int i=0; i<3; i++)   //rows
    {
        int sum =0;
        for (int j=0; j<3; j++)   //columns
        {
            sum+=arr[i][j]
        }
    }

    printf("\naddition of matrix 1 and matrix 2:\n");
     for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            printf("%d \t",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}