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
    scanf("%d", &s1.rollno);
    printf("\nEnter name: ");
    scanf("%s", &s1.name);
    printf("\nEnter marks: ");
    scanf("%d", &s1.marks);

    printf("\nStudent details:");
    printf("\nRoll no:%d", s1.rollno);
    printf("\nName:%s", s1.name);
    printf("\nMarks:%d", s1.marks);
}