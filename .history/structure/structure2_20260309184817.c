#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};

int main()
{ 
    int no;
    printf("\nNeter no of students:");
    scanf("%d", &no);

    struct student s1[no];
    for(int i=0; i<no;i++)
    {
        printf("\nEnter the details for student %d", (i+1));
        printf("\nEnter roll no: ");
        s1.rollno= scanf("%d", &s1[i].rollno);
        printf("\nEnter name: ");
        s1.rollno= scanf("%s", &s1[i].name);
        printf("\nEnter marks: ");
        s1.rollno= scanf("%d", &s1[i].marks);
    }

    printf("\nStudent details:");
    for(int i=0; i<no;i++)
    {
       
        printf("\nRoll no:%d", s1[i].rollno);
        printf("\nName:%s", s1[i].name);
        printf("\nMarks:%d", s1[i].marks);
        printf("\n-----------------------");
    }
}