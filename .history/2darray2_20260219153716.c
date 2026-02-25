#include <stdio.h>
int main()
{
    //initialization with decleration
    //int arr1[3][3]= {[1,2,3], [4,5,6], [7,8,9]};
    //manual intitialization 
    int arr[3][3];
  

    printf("\nTake array elements from user:");
    for (int i=0; i<3; i++)   //rows
    {
        for (int j=0; j<3; j++)   //columns
        {
            
           scanf("%d", &arr[i][j]);
            
        }
    }

    return 0;
}