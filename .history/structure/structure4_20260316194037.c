#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    int marks;
};

int main()
{
    struct student s[100], temp;
    int n = 0;
    int choice, i, j, id, pos;

    while (1)
    {
        printf("\n\n----- MENU -----");
        printf("\n1. Create");
        printf("\n2. Display");
        printf("\n3. Search");
        printf("\n4. Sort");
        printf("\n5. Delete");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        // CREATE
        case 1:
            printf("\nEnter number of students: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {
                printf("\nEnter details for student %d", i + 1);

                printf("\nEnter Roll No: ");
                scanf("%d", &s[i].rollno);

                printf("Enter Name: ");
                scanf("%s", s[i].name);

                printf("Enter Marks: ");
                scanf("%d", &s[i].marks);
            }
            break;

        // DISPLAY
        case 2:
            if (n == 0)
            {
                printf("\nNo records available");
                break;
            }

            printf("\nStudent Details:\n");
            for (i = 0; i < n; i++)
            {
                printf("\nRoll No: %d", s[i].rollno);
                printf("\nName: %s", s[i].name);
                printf("\nMarks: %d", s[i].marks);
                printf("\n----------------------");
            }
            break;

        // SEARCH
        case 3:
            printf("\nEnter Roll No to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (s[i].rollno == id)
                {
                    printf("\nRecord Found");
                    printf("\nRoll No: %d", s[i].rollno);
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %d", s[i].marks);
                    break;
                }
            }

            if (i == n)
                printf("\nRecord Not Found");

            break;

        // SORT
        case 4:
            for (i = 0; i < n - 1; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (s[i].rollno > s[j].rollno)
                    {
                        temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                    }
                }
            }

            printf("\nRecords Sorted by Roll Number");
            break;

        // DELETE
        case 5:
            printf("\nEnter Roll No to delete: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (s[i].rollno == id)
                {
                    pos = i;
                    break;
                }
            }

            if (i == n)
            {
                printf("\nRecord not found");
            }
            else
            {
                for (i = pos; i < n - 1; i++)
                {
                    s[i] = s[i + 1];
                }
                n--;
                printf("\nRecord deleted successfully");
            }

            break;

        case 6:
            printf("\nProgram Ended");
            return 0;

        default:
            printf("\nInvalid choice");
        }
    }
}