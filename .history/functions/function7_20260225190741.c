#include <stdio.h>
void circlearea()
{
    float  radius;
    printf("\nEnter radius of circle:");
    scanf("%f", &radius);
    printf("\nArea of circle is :%f", (3.14 * radius * radius));

}
int main()
{
    int radius;
    printf("\nEnter the radius:");
    scanf("%f", &radius);
    circlearea(radius)
    return 0;
}