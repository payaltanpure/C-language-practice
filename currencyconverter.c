#include <stdio.h>

int main()
{
    int choice, choice2, ct;
    float rupee, dollar, euro, result;


    menu:
    printf("Currency Converter (From Rupee)\n");
    printf("1. Rupee \n");
    printf("2. Dollar \n");
    printf("3. Euro \n");
    printf("4. Exit \n");
   

    printf("Enter your choice:\n ");
    scanf("%d", &choice);

    
    switch (choice)
    {

        
        case 1:

        printf("Enter amount in Rupees:\n ");
        scanf("%f", &rupee);

        
        rupee_menu:
        printf("Menu:\n");
        printf("1. Rupee to Rupee\n");
        printf("2. Rupee to Dollar\n");
        printf("3. Rupee to Euro\n");
        printf("4. Exit\n");
        printf("Enter your choice for conversion:\n");
        scanf("%d", &choice2);

        switch (choice2)
        {
           case 1:
           
                result = rupee; // rupee to rupee
                printf("Rupee = %.2f \n", result);
                break;
           
           case 2:

                result = rupee / 83;   // Rupee to Dollar
                printf("Dollar = %.2f\n", result);
                break;

            case 3:

                result = rupee / 90;   // Rupee to Euro
                printf("Euro = %.2f \n", result);
                break;
            
            case 4:

                goto menu;
                break;

            default:
                printf("Invalid choice \n");
               
            
             


        }

        goto rupee_menu;
        break;

        case 2:


        printf("Enter amount in Dollar: \n ");
        scanf("%f", &dollar);

        dollar_menu:
        printf("Menu:\n");
        printf("1. Dollar to dollar\n");
        printf("2. dollar to rupee\n");
        printf("3. Dollar to Euro\n");
        printf("4. Exit\n");
        printf("Enter your choice for conversion:\n");
        scanf("%d", &choice2);

        switch (choice2)
        {
           case 1:
           
                result = dollar; // dollar to dollar
                printf("Dollar = %.2f \n", result);
                break;
           
           case 2:

                result = dollar * 83;   // dollar to rupee
                printf("Rupee = %.2f \n", result);
                break;

            case 3:

                result = dollar / 1.1;   // dollar to Euro
                printf("Euro = %.2f \n", result);
                break;

            case 4:

                goto menu;
                break;

            default:
                printf("Invalid choice \n");
                

            


        }
        goto dollar_menu;
        break;

        case 3:

        printf("Enter amount in Euro: \n ");
        scanf("%f", &euro);

        
        euro_menu:
        printf("Menu:\n");
        printf("1. Euro to euro\n");
        printf("2. euro to rupee\n");
        printf("3. euro to Dollar \n");
        printf("4. Exit\n");
        printf("Enter your choice for conversion:\n");
        scanf("%d", &choice2);

        switch (choice2)
        {
           case 1:
           
                result = euro; // euro to euro
                printf("Euro = %.2f \n", result);
                break;
           
           case 2:

                result = euro * 90;   // euro to rupee
                printf("Rupee = %.2f \n", result);
                break;

            case 3:

                result = euro * 1.1;   // euro to dollar
                printf("Dollar = %.2f \n", result);
                break;
            
            case 4:

                goto menu;
                break;

            default:
                printf("Invalid choice \n");
                

            
    


        }
        goto euro_menu;
        break;

        case 4:
        printf("Thankyou");
        break;

       
    default:
        printf("Invalid choice \n");

    }
      printf("\nDo you want to continue: Press 1 to continue or else 0");
        printf("Enter your choice:");
        scanf("%d", &ct);
        if (ct==1)
        {
            goto menu;
        }

     
    
    return 0;
}
