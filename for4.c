#include <stdio.h>
int main()
{
    int choice ,ch;
    int i =1;
    int start ,end , sum=0;
    menu:
    printf("\nMenu");
    printf("\n1. Print no from 1 to 10");
    printf("\n2. Print no in reverse order");
    printf("\n3. Sum of natural no");
    printf("\n Enter the choice:");
    scanf("%d", &choice);
    switch (choice)
    {
       case 1:
       
        do 
        {
            
            printf("\n%d", i);
            i++;
        }
        while (i <=10);
    
        
        break;
       case 2:
         printf("\n ENter the start:");
         scanf("%d", &start);
         printf("\n Enter the end:");
         scanf("%d", &end);
         printf("\nReverse nos:");
         for (i=end; i>=start; i--)
         {
            printf("\n %d", i);
         }
         break;

         case 3:
         printf("\n Enter the start:");
         scanf("%d", &start);
         printf("\n ENter the end:");
         scanf("%d", &end);
          for (i=start; i<=end; i++)
         {
            sum = sum + i;
         }
         printf("\n Sum of natural nos is: %d", sum);
         break;

        
    default:
        printf("\n Invlaid input");
        break;
    }

    printf("\n Enter 1 to continue and 0 to exit");
    printf("\nENter the coice:");
    scanf("%d", &ch);
    if (ch ==1)
    {
        goto menu;
    }
    else
    {
        printf("\n Thankyou");
    }
    return 0;
}