#include <stdio.h>
int main()
{
    float radius,area;
    printf("Enter radius:");
    scanf("%f",&radius);
    area= 3.14*radius*radius;
    printf("The area of circle is: %f",area);
    return 0;
}
