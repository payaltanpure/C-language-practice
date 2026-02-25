#include <stdio.h>
void circlearea();
void triarea();
void recarea();
int main()
{
   int ch;
   printf("\n1.Area of Circle \n2.Area of triangle \n 3.Area of rectangle\n 4. Exit");
   scanf("%d", &ch);
   switch(ch)
   {
      case 1:
      void circlearea();
      break;

      case 2:
      void triarea();
      break;

      case 3:
      void recarea();
      break;

      case 4:
      printf("\nThanku");
      break;

      default: 
      printf("\nInvalid choice");

   }
   return 0;
}

void circlearea()
{
    float area1, radius;
    printf("\nEnter radius of circle:");
    scanf("%f", &radius);
    printf("\nArea of circle is :", (3.14 * radius * radius));

}

