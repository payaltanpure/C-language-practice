#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};

int main()
{ 
    struct student s1[5];
    for(int i=0; i<5;i++)
    {

    }


    printf("\nStudent details:");
    printf("\nRoll no:%d", s1.rollno);
    printf("\nName:%s", s1.name);
    printf("\nMarks:%d", s1.marks);
}