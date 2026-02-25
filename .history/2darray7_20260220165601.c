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
        for (int j=0; j<3; j++)   //columns
        {
            if(i+j==2)
            {
                printf("%d \t", mat1[i][j]);
            }
        }

    }

       for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            if(arr[i]==2)
            {
                printf("%d \t", mat1[i][j]);
            }
        }

    }


    
    return 0;
}