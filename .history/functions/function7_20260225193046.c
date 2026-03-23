#include <stdio.h>
void circlearea(float radius) //with arg no return type
{
    printf("\nArea of circle is :%f", (3.14 * radius * radius));

}
float triarea() //with return type no arguments
{
    float base , height, areatri;
    printf("\nEnter the base and height:");
    scanf("%f%f", &base , &height);
    areatri= 0.5* base*height;
    return areatri;
}
float recarea(float base, float height) // with return type and arguments also
{
    
    float arearec= base*height;
    return arearec;
}

int main()
{
    int radius;
    float area1, area2;
    int ch;
    printf("\n1. Area of circle \n2.Area of triangle \n3.Area of rectangle");
    printf("\nNter")
    printf("\nEnter the radius:");
    scanf("%f", &radius);
    circlearea(radius);

    area1= triarea();
    printf("\nArea of triangle is :%f", area1);

    float base , height;
    printf("\nEnter the base and height of rectangle:");
    scanf("%f%f", &base , &height);
    area2= recarea(base, height);
    printf("\nArea of rectangle is :%f", area2);
    return 0;
}