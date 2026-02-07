#include <stdio.h>
int main()
{

    int ch, ct;
    float radius, cirarea, recarea, triarea, base, height;

    menu:
    printf("---------------------Menu--------------------");
    printf("\n1. Area of circle \n 2. Area of Triangle \n 3. Area of rectangle\n 4. exit");
    printf("\nEnter the choice:");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1: 
        printf("\nEnter the radius of cirle:");
        scanf("%f", &radius);
        cirarea= 3.14* radius * radius;
        printf("\n Area of circle is: %f", cirarea);
        break;

        case 2:
        printf("\nEnter the base and height of triangle:");
        scanf("%f %f", &base , &height);
        triarea= 0.5 * base * height;
        printf("\n Area of triangle is: %f", triarea);
        break;

        case 3:
        printf("\nEnter the base and height of rectangle:");
        scanf("%f %f", &base , &height);
        recarea= base * height;
        printf("\n Area of rectanagle is: %f", recarea);
        break;

        case 4:
            printf("\nThankyou");
            return 0;   //exit the program execution
            break;

        default:
        printf("Invalid Input");
        break;
        
    }
    printf("\nDo you want to continue: Press 1 to continue or else 0");
        printf("Enter your choice:");
        scanf("%d", &ch);
        if (ch==1)
        {
            goto menu;
        }
        

    
    
    return 0;

}