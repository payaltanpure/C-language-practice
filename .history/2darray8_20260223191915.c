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
    for(j =0; j<3; j++)
    {
        for (k=0; k<4; k++)
        {
            scanf("%d", &mat2[j][k]);
        }
    }

    //multiply
    for (i=0; i<2; i++)
    {
        for (j=0; j<3;j++)
        {
           for(k=0 ;k<4; k++)
           {
              mat3[i][k]= mat3[i][k] + mat1[i][j] * mat2[j][k];
           }
        }
    }

    //print result
    printf("\nMatrix multiplication is:");
    for (i=0; i<2; i++)
    {
        for (j=0; j<3;j++)
        {
           for(k=0 ;k<4; k++)
           {
              printf("")
           }
        }
    }

    return 0;
}