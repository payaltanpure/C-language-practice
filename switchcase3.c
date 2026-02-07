#include <stdio.h>
int main()
{
    float radius, base, height, side ;
    int choice ,ct, ch;
    menu:
    printf("Menu");
    printf("\n 1. Circle");
    printf("\n 2. Triangle");
    printf("\n 3. Square");
    printf("\n 4. Rectangle");
    printf("\n 5. Exit");
    printf("\nEnter the choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        
        printf("\n Enter the radius of circle:");
        scanf("%f", &radius);
        menu1:
        printf("\nMenu");
        printf("\n1.Area");
        printf("\n2.Cicumference");
        printf("\n3.Exit");
        printf("\nEnter the choice:");
        scanf("%d",&ct);
        
        
        switch (ct)
        {
        case 1:
            printf("Area of circle:%f", 3.14 * radius * radius);
            break;
        case 2:
            printf("Circumference of circle:%f", 2 * 3.14 * radius);
            break;
        case 3:
            goto menu;
            break;
            
        default:
            printf("Invalid input");
            break;
        }
        goto menu1;
    break;

    case 2:
         
        printf("\nEnter the base and height of triangle:");
        scanf("%f %f", &base, &height);
        printf("\nArea of triangle: %f", 0.5 * base *height  );
        break;

    case 3:

        printf("\nEnter the side of square:");
        scanf("%f", &side);
        printf("\nArea of square: %f", side * side );
        break;

    case 4:

        printf("\nEnter the base and height of rectanagle:");
        scanf("%f %f", &base, &height);
        printf("\nArea of rectanagle: %f", base *height  );
        break;
    
    case 5:
         printf("\nThankyou");
         return 0; //exit the program execution
         break;
    
    default:

        printf("Invalid input");
        break;
    }

printf("\nEnter 1 to continue and 0 to exit:");
scanf("%d", &ch);
if (ch== 1)
{
    goto menu;
}
else
{
    printf("\nThankyou");
}
return 0;
}