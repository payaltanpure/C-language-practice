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
    areatri= 0.5* base*height;
    return areatri;
}
int main()
{
    int radius;
    float area1;
    printf("\nEnter the radius:");
    scanf("%f", &radius);
    circlearea(radius);
    area1= triarea
    printf("\nArea of triangle is :%f", (0.5* base*height));
    return 0;
}