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
float recarea()
{
    
    scanf("%f%f", &base , &height);
    printf("\nArea of rectangle is :%f", (base*height));
}

int main()
{
    int radius;
    float area1, area2;
    printf("\nEnter the radius:");
    scanf("%f", &radius);
    circlearea(radius);
    area1= triarea();
    printf("\nArea of triangle is :%f", area1);
    float base , height;
    printf("\nEnter the base and height of rectangle:");
    area2= 
    return 0;
}