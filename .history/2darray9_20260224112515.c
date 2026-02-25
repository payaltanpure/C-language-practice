#include<stdio.h>
#define max 20

int main()
{
    int r1,c1,r2,c2, choice, ct;
    int mat1[max][max], mat2[max][max], mat3[max][max];
    int i,j,k;

    printf("\nEnter no of rows and columns for matrix1: ");
    scanf("%d%d", &r1, &c1);

    printf("\nEnter no of rows and columns for matrix2: ");
    scanf("%d%d", &r2, &c2);

    menu1:
    printf("\nMenu:");
    printf("\n1. Addition of 2 matrix");
    printf("\n2. Multiplication of 2 matrix");
    printf("\n3. Transpose of matrix1");
    printf("\n4. Transpose of matrix2");
    printf("\n5. Exit");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(r1==r2 && c1==c2)
            {
                printf("\nEnter elements of Matrix1:\n");
                for(i=0;i<r1;i++)
                    for(j=0;j<c1;j++)
                        scanf("%d",&mat1[i][j]);

                printf("\nEnter elements of Matrix2:\n");
                for(i=0;i<r2;i++)
                    for(j=0;j<c2;j++)
                        scanf("%d",&mat2[i][j]);

                for(i=0;i<r1;i++)
                    for(j=0;j<c1;j++)
                        mat3[i][j] = mat1[i][j] + mat2[i][j];

                printf("\nResultant Matrix (Addition):\n");
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c1;j++)
                        printf("%d ",mat3[i][j]);
                    printf("\n");
                }
            }
            else
                printf("\nAddition not possible!");
            break;

        case 2:
            if(c1==r2)
            {
                printf("\nEnter elements of Matrix1:\n");
                for(i=0;i<r1;i++)
                    for(j=0;j<c1;j++)
                        scanf("%d",&mat1[i][j]);

                printf("\nEnter elements of Matrix2:\n");
                for(i=0;i<r2;i++)
                    for(j=0;j<c2;j++)
                        scanf("%d",&mat2[i][j]);

                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c2;j++)
                    {
                        mat3[i][j]=0;
                        for(k=0;k<c1;k++)
                            mat3[i][j] += mat1[i][k] * mat2[k][j];
                    }
                }

                printf("\nResultant Matrix (Multiplication):\n");
                for(i=0;i<r1;i++)
                {
                    for(j=0;j<c2;j++)
                        printf("%d ",mat3[i][j]);
                    printf("\n");
                }
            }
            else
                printf("\nMultiplication not possible!");
            break;

        case 3:
            printf("\nEnter elements of Matrix1:\n");
            for(i=0;i<r1;i++)
                for(j=0;j<c1;j++)
                    scanf("%d",&mat1[i][j]);

            printf("\nTranspose of Matrix1:\n");
            for(i=0;i<c1;i++)
            {
                for(j=0;j<r1;j++)
                    printf("%d ",mat1[j][i]);
                printf("\n");
            }
            break;
         case 4:
            printf("\nEnter elements of Matrix2:\n");
            for(i=0;i<r2;i++)
                for(j=0;j<c2;j++)
                    scanf("%d",&mat2[i][j]);

            printf("\nTranspose of Matrix2:\n");
            for(i=0;i<r2;i++)
            {
                for(j=0;j<r2;j++)
                    printf("%d ",mat2[j][i]);
                printf("\n");
            }
            break;
            case 5:
               printf("\nThanku");
               return 0;
            break;

        default:
            printf("\nInvalid Choice!");
    }

    printf("\nEnter 1 to continue and 0 to exit: ");
    scanf("%d", &ct);
    if (ct==1)
    {
        goto menu1;
    }
    else
    {
        printf("\nThanku");
        return 0;
    }

    return 0;
}