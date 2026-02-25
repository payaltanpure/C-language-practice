#include <stdio.h>

int main()
{  
   menu1:
   {
   int ch,ct;
   printf("\n1.Factorial of no  \n2.factors of no \n 3.Prime no\n 4. Reverse no\n 5. Power of no");
   printf("\nEnter the choice:");
   scanf("%d", &ch);
   switch(ch)
   {
      

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

