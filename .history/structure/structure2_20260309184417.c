#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};

int main()
{ 
    printf("\nNeter no of students:")
    struct student s1[5];
    for(int i=0; i<5;i++)
    {
        printf("\nEnter roll no: ");
        s1.rollno= scanf("%d", &s1.rollno);
        printf("\nEnter name: ");
        s1.rollno= scanf("%s", &s1.name);
        printf("\nEnter marks: ");
        s1.rollno= scanf("%d", &s1.marks);
    }


    printf("\nStudent details:");
    printf("\nRoll no:%d", s1.rollno);
    printf("\nName:%s", s1.name);
    printf("\nMarks:%d", s1.marks);
}