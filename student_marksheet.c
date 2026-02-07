#include <stdio.h>
int main()
{
   int roll_no ;
   char name[10] ;
   int m1,m2,m3 ,total;
   float percent;
   
   
   printf("Enter Roll no:");
   scanf("%d", &roll_no);
   printf("\nEnter Name:");
   scanf("%s", &name);
   printf("\nEnter Sub1 Marks:");
   scanf("%d", &m1);
   printf("\nEnter Sub2 Marks:");
   scanf("%d", &m2);
   printf("\nEnter Sub3 Marks:");
   scanf("%d", &m3);
   printf("\nenter the array elements:");\
  
   total= m1+m2+m3;
   percent= total/3;
   
   printf("\n----------------Student Marksheet-----------------");
   printf("\nStudent Roll_no: %d", roll_no);
   printf("\nStudent Name:%s", name);
   printf("\nStudent Sub1 Marks: %d", m1);
   printf("\nStudent Sub2 Marks:%d", m2);
   printf("\nStudent Sub3 Marks:%d", m3);
   printf("\nTotal Marks:%d", total);
   printf("\nPercent:%f", percent);
   printf("\n----------------!!!!Thankyou!!!!-----------------");
   
   return 0;
}
