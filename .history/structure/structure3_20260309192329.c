#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    int marks;
};

struct student s1[100];
void addstudent()
{
    int no;
    printf("\nNeter no of students:");
    scanf("%d", &no);

    
    for(int i=0; i<no;i++)
    {
        printf("\nEnter the details for student %d", (i+1));
        printf("\nEnter roll no: ");
        scanf("%d", &s1[i].rollno);
        printf("\nEnter name: ");
        scanf("%s", &s1[i].name);
        printf("\nEnter marks: ");
        scanf("%d", &s1[i].marks);
    }
}

void dip

int main()
{ 
    

    printf("\nStudent details:");
    for(int i=0; i<no;i++)
    {
       
        printf("\nRoll no:%d", s1[i].rollno);
        printf("\nName:%s", s1[i].name);
        printf("\nMarks:%d", s1[i].marks);
        printf("\n-----------------------");
    }
}