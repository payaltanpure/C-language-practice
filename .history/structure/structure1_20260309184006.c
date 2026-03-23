#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};

int main()
{ 
    struct student s1;
    printf("\nEnter roll no: ");
    s1.rollno= scanf("%d", &s1.rollno);
    printf("\nEnter name: ");
    s1.rollno= scanf("%s", &s1.rollno);

}