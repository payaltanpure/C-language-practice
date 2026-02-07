#include <stdio.h>
int main()
{

    int ch, ct;
    float radius, cirarea, recarea, triarea, base, height;

    menu:
    printf("---------------------Menu--------------------");
    printf("\n1. Area of circle \n 2. Area of Triangle \n 3. Area of rectangle");
    printf("\nEnter the choice:");
    scanf("%d", &ch);

    
    if (ch ==1)
    {
        printf("\nEnter the radius of cirle:");
        scanf("%f", &radius);
        cirarea= 3.14* radius * radius;
        printf("\n Area of circle is: %f", cirarea);
    }
    else if (ch ==2)
    {
        printf("\nEnter the base and height of triangle:");
        scanf("%f %f", &base , &height);
        triarea= 0.5 * base * height;
        printf("\n Area of triangle is: %f", triarea);
    }
    else if  (ch ==3)
    {
        printf("\nEnter the base and height of rectangle:");
        scanf("%f %f", &base , &height);
        recarea= base * height;
        printf("\n Area of rectanagle is: %f", recarea);
    }

    printf("\nDo you want to continue: Press 1 to continue and 0 to exit");
    scanf("%d", &ct);
    if (ct==1)
    {
        goto menu;
    }


    
    
    return 0;

}