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
    int id;
    printf("\nNeter no of students:");
    scanf("%d", &no);

    struct student s1[no];
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

    printf("\nStudent details:");
    for(int i=0; i<no;i++)
    {
       
        printf("\nRoll no:%d", s1[i].rollno);
        printf("\nName:%s", s1[i].name);
        printf("\nMarks:%d", s1[i].marks);
        printf("\n-----------------------");
    }

    printf("\nEnter employee id to search record:");
    scanf("%d", &id);
    for(int i =0; i<no; i++)
    {
        if(s1[i].rollno == id)
        {
            flag ==1;
            printf("\nRecord found");
            printf("\nRoll no:%d", s1[i].rollno);
            printf("\nName:%s", s1[i].name);
            printf("\nMarks:%d", s1[i].marks);
        }
        else
        {
            printf("\nRecord not found");
        }
    }

    int found = 0;

for(int i = 0; i < no; i++)
{
    if(s1[i].rollno == id)
    {
        printf("\nRecord found");
        printf("\nRoll no:%d", s1[i].rollno);
        printf("\nName:%s", s1[i].name);
        printf("\nMarks:%d", s1[i].marks);
        found = 1;
        break;
    }
}

if(found == 0)
{
    printf("\nRecord not found");
}
}