#include <stdio.h>
void createarray(int);
int main()
{
    int no , arr[];
    printf("\nEnter size of array:");
    scanf("%d", &no);
    createarray(no);
    return 0;
}
void createarray(int l)
{
    printf("\nEnter the array elemnts:");
    for(int i=0; i<l;i++)
    {
        scanf("%d", arr[i]);
    }
}