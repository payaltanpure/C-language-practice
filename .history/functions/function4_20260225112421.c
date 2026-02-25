#include <stdio.h>

int main()
{  
   menu1:
   {
   int ch,ct;
   printf("\n1.Factorial of no  \n2.factors of no \n 3.Area of rectangle\n 4. Exit");
   printf("\nEnter the choice:");
   scanf("%d", &ch);
   switch(ch)
   {
      case 1:
      circlearea();
      break;

      case 2:
      triarea();
      break;

      case 3:
      recarea();
      break;

      case 4:
      printf("\nThanku");
      return 0;
      break;

      default: 
      printf("\nInvalid choice");

   }
   printf("\nENter 1 to conyinue and 0 to exit:");
   scanf("%d", &ct);
   if(ct==1)
   {
      goto menu1;
   }
   else{
         printf("\nThanku");
        return 0;
   }
}
   return 0;
}

