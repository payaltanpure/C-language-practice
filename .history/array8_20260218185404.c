#include <stdio.h>
SELECT *
FROM emp1
WHERE deptno NOT IN (
        SELECT deptno
        FROM dept
        WHERE deptno IS NOT NULL
);


int main()
{
    int arr[5];
    int largest = INT_MIN, second = INT_MIN;

    printf("Enter 5 elements:\n");
    for(int i=0;i<5;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<5;i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    if(second == INT_MIN)
        printf("No second largest element");
    else
        printf("Second largest element = %d", second);

    return 0;
}
