#include <stdio.h>
int main()
{
   
    int roll;
    char name[10];
    char clgname[20];
    int m1, m2, m3, m4 , m5 , total;
    float percent;
    printf("Enter Roll no :");
    scanf("%d", &roll);
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
     
    printf("\nRoll no: %d", roll);
    printf("\nStudent Name: %s", name);
    printf("\nCollege Name: %s", clgname);
    printf("\nSub 1 Marks: %d", m1);
    printf("\nSub 2 Marks: %d", m2);
    printf("\nSub 3 Marks: %d", m3);
    printf("\nSub 4 Marks: %d", m4);
    printf("\nSub 5 Marks: %d", m5);
   

    if ( (m1>=35) && (m2>=35) && (m3>=35)  && (m4>=35) && (m5>=35))
    {
        printf("\nPass");
            if ( percent>=85){
                printf("\nGrade :A");
                 printf("\nTotal Marks: %d", total);
                 printf("\nPercentage: %f", percent);
            }
            else if( percent>=75)
            {
                printf("\nGrade :B");
                 printf("\nTotal Marks: %d", total);
                 printf("\nPercentage: %f", percent);
            }
            else if( percent>=55)
            {
                printf("\nGrade :C");
                 printf("\nTotal Marks: %d", total);
                 printf("\nPercentage: %f", percent);
            }
            else if( percent>=45)
            {
                printf("\nGrade :D");
                 printf("\nTotal Marks: %d", total);
                 printf("\nPercentage: %f", percent);
            }
            
    }
   
    else
    {
       printf("\nFail");    
    }



   

    

    return 0;
}