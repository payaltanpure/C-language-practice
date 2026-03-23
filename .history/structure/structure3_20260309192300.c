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

}

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