#include <stdio.h>
int main()
{
    //initialization with decleration
    //int arr1[3][3]= {[1,2,3], [4,5,6], [7,8,9]};
    //manual intitialization 
    int arr[3][3];
    arr[0][0]= 1;
    arr[0][1]= 2;
    arr[0][2]= 3;
    arr[1][0]= 4;
    arr[1][1]= 5;
    arr[1][2]= 6;
    arr[2][0]= 7;
    arr[2][1]= 8;
    arr[2][2]= 9;
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nEven nos in 2d array:");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            if (arr[i][j]%2==0)
            {
               printf("%d \t", arr[i][j]);
            } 
        }
  
    }

    printf("\nTake array elements from user:");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            
           scanf("%d", &arr[i][j]);
            
        }
    }
    printf("\nArray elements taken from user:\n");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

     printf("\nArray elements taken from user:\n");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            printf("%d \t", arr[j][1]);
        }
        printf("\n");
    }

     
    return 0;
}