#include <stdio.h>

int main()
{
    int choice, a, b;
    char ch;

menu:
    printf("\nMenu");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");

    printf("\nEnter the choice: ");
    scanf("%d", &choice);

    switch (choice)                                             
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Addition is: %d", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Subtraction is: %d", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            if (a != 0 && b != 0)
                printf("Multiplication is: %d", a * b);
            else
                printf("Multiplication by zero gives zero");
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);

            if (b != 0)
                printf("Division is: %d", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        case 5:
            printf("Thank you!");
            return 0;  //exit the program execution
            break;
            
            

        default:
            printf("Invalid choice");
    }

    printf("\nEnter y,Y to continue or n, N to exit: ");
    scanf(" %c", &ch);

    if (ch == 'y' || ch == 'Y')
        goto menu;
    else
        printf("Thank you!");

    return 0;
}
