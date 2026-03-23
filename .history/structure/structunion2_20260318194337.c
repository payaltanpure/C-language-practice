#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    int marks[5];
    float percent;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n],;   // array of structures

    // Input details
    for(int i = 0; i < n; i++)
    {
        int total = 0;

        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter roll no: ");
        scanf("%d", &s[i].rollno);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks for 5 subjects:\n");
        for(int j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        // Calculate percentage
        s[i].percent = total / 5.0;

    }
    //sorting
    
    for(int i=0; i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[j].percent<s[i].percent)
            {
                temp = s[i];
                s[i]= s[j];
                s[i]= s[j];
            }
           
        }
    }

    // Display details
    printf("\n\n----- Student Details -----\n");

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll no: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);

        printf("Marks:\n");
        for(int j = 0; j < 5; j++)
        {
            printf("Subject %d: %d\n", j + 1, s[i].marks[j]);
        }

        printf("Percentage: %.2f%%\n", s[i].percent);
        printf("--------------------------\n");
    }

    return 0;
}