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
   printf("\nENter 1 to conyinue and 0 to exit:");
   scanf("%d", &ct);
   if(ct==1)
   {
    goto menu1;
   }
   else{
    
   }
   return 0;
}

void circlearea()
{
    float  radius;
    printf("\nEnter radius of circle:");
    scanf("%f", &radius);
    printf("\nArea of circle is :", (3.14 * radius * radius));

}

void triarea()
{
    float base , height;
    printf("\nEnter the base and height:");
    scanf("%f%f", &base , &height);
    printf("\nArea of triangle is :", (0.5* base*height));
}
void recarea()
{
    float base , height;
    printf("\nEnter the base and height:");
    scanf("%f%f", &base , &height);
    printf("\nArea of rectangle is :", (base*height));
}


