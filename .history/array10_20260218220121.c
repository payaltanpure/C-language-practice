#include <stdio.h>
#define max 20
int main()
{
    int set1[max], set2[max], setunion[max], setintr[max], setdiff[max];
    int i , j, k=0;
    int ch, ct;
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
    mn=enu1:
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

           for(j=0;j<l2;j++)
           {
             flag=1;
             for(i=0;i<l1;i++)
             {
                if(set2[j]== set1[i])
                {
                    flag=0;
                    break;
                }
             }
             if(flag==1)
             {
                setunion[k]= set2[j];
                k++;
             }
           }

           printf("\nuion is:");
           for(i=0; i<k;i++)
           {
              printf("%5d", setunion[i]);
           }

        break;

        case 2:

        k=0;
            for(i=0;i<l1;i++)
            {
                for(j=0;j<l2;j++)
                {
                    if(set1[i]==set2[j])
                    {
                        setintr[k++]=set1[i];
                        break;
                    }
                }
            }

            printf("\nIntersection = ");
            for(i=0;i<k;i++)
                printf("%5d",setintr[i]);
        break;

        case 3:

        k=0;
            for(i=0;i<l1;i++)
            {
                flag=0;
                for(j=0;j<l2;j++)
                {
                    if(set1[i]==set2[j])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    setdiff[k++]=set1[i];
            }

            printf("\nDifference (set1-set2) = ");
            for(i=0;i<k;i++)
                printf("%5d",setdiff[i]);
        break;

        default:
            printf("\nInvalid choice");
    }

     printf("\nPress 1 to continue and 0 to exit:");
    scanf("%d", &ct);
    if(ct==1)
    {
        goto menu1;
    }
    else if(ct==0)
    {
        printf("\nThankyou");
        return 0;
    }


    return 0;
}