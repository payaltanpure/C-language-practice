#include <stdio.h>
int main()
{
   int a, b;
    printf("Enter two nos for comparison:");
    scanf("%d %d", &a, &b);

    if ((a==0) && (b==0))
    {
       printf("A and B are zero");
    }
    else if (a>b)
    {
     printf ("\n%d is greater number", a);
    }
    else{
        printf ("\n%d is greater number", b);
    }
    /*
    if(a>=18)
    {
        printf("\nEligible for voting");
    }
    else
    {
        printf("\nNot Eligible for voting");
    }

    char name[10];
    char clgname[20];
    int m1, m2, m3, m4 , m5 , total;
    float percent;
    printf("Enter name:");
    scanf("%s", &name);
    printf("\nEnter collge name :");
    scanf("%s", &clgname);
    printf("\nEnter sub1 marks:");
    scanf("%d", &m1);
    printf("\nEnter sub2 marks:");
    scanf("%d", &m2);
    printf("\nEnter sub3 marks:");
    scanf("%d", &m3);
    printf("\nEnter sub4 marks:");
    scanf("%d", &m4);
    printf("\nEnter sub5 marks:");
    scanf("%d", &m5);

    total= m1+m2+m3+m4+m5;
    percent = total/5;
    if ( percent>=85){
        printf("\nGrade :A");
    }
    else if( percent>=75)
    {
        printf("\nGrade :B");
    }
    else if( percent>=65)
    {
        printf("\nGrade :C");
    }
    else if( percent>=55)
    {
        printf("\nGrade :D");
    }
    else if( percent>=35)
    {
        printf("\nGrade :E");
    }
    else
    {
       printf("\nFail");    
    }

    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if ((age==0)|| (age<0)|| (age>100))
    {
        printf("Invalid age");
    }
    else if ((age>0)){
        printf("Age is: %d", age);
    } 
    
    
    int no;
    printf("Enter no:");
    scanf("%d", &no);
    if (no>0)
    {
        printf("%d is positive no", no);
    }
    else if  (no<0)
    {
        printf("%d is negative no", no);
    }
    else{
        printf("Number is zero");
    }
    */

    return 0;
}