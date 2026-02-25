#include <stdio.h>
int main()
{
    int mat1[2][3] , mat2[3][4], mat3[2][4]= {0}; //to avoid garbage value to multiply
    int i, j, k;

    printf("\nEnter mat1 elemnets:");
    for(i =0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter mat2 elemnets:");
    for(i =0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    return 0;
}