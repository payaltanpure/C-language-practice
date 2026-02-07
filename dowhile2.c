#include <stdio.h>
int main()
{
    int m,n;
    printf("\n Enter two nos from where you want to print even nos and how many:");
    scanf("%d %d", &m, &n);
    printf("\nEven nos:");
    do {
        if (m %2 == 0)
        {
            printf("\n%d", m);
        }
        m++;
    }
    while (m<=n);
   
    return 0;
}
