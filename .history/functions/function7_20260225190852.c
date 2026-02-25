#include <stdio.h>
void circlearea(float radius)
{
    printf("\nArea of circle is :%f", (3.14 * radius * radius));

}
float triarea()
{
    float base , height, areatri;
    printf("\nEnter the base and height:");
    scanf("%f%f", &base , &height);
    area
    printf("\nArea of triangle is :%f", (0.5* base*height));
}
int main()
{
    int radius;
    printf("\nEnter the radius:");
    scanf("%f", &radius);
    circlearea(radius);
    return 0;
}