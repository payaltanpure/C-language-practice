#include <stdio.h>
#define max 20
int main()
{
    int set1[max], set2[max], setunion[max], setintr[max], setdiff[max];
    int i , j, k=0;
    int ch;
    int l1,l2;
    int flag;

    printf("\nHow many numbers do u want in set1:");
    scanf("%d", &l1);

    printf("\nEnter %d numbers in set1", l1);
    for (i=0; i<l1;i++)
    {
        scanf("%d", &set1[i]);
    }

    printf("\nHow many numbers do u want in set2:");
    scanf("%d", &l2);
     printf("\nEnter %d numbers in set2", l2);
    for (i=0; i<l2;i++)
    {
        scanf("%d", &set2[i]);
    }

    printf("\nMenu:");
    printf("\n1.Union \n2.Intersection \n3.Difference");
    printf("\nNeter your choice:");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
           for(i=0; i<l1; i++)
           {
              setunion[k]= set1[i];
              k++;
           }

           for(j=)

        break;
    }

    return 0;
}