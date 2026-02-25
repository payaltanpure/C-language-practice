#include <stdio.h>
int main()
{

    int mat1[3][3];
    int mat2[3][3];
  
    printf("\nTake array elements from user:");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            
           scanf("%d", &mat1[i][j]);
            
        }
    }

    return 0;
}