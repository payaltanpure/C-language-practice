#include <stdio.h>

struct account
{
    int accno;
    char custname[20];
    float accbal;
};

int main()
{
    struct account a[100], temp;
    int n = 0;
    int choice, i, j, id, pos, ct;

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
            printf("\nEnter number of accounts: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {
                printf("\nEnter details for account %d", i + 1);

                printf("\nEnter Account No: ");
                scanf("%d", &a[i].accno);

                printf("Enter Customer Name: ");
                scanf("%s", a[i].custname);

                printf("Enter Account Balance: ");
                scanf("%f", &a[i].accbal);
            }
            break;

        // DISPLAY
        case 2:
            if (n == 0)
            {
                printf("\nNo records available");
                break;
            }

            printf("\nAccount Details:\n");
            for (i = 0; i < n; i++)
            {
                printf("\nAccount No: %d", a[i].accno);
                printf("\nCustomer Name: %s", a[i].custname);
                printf("\nAccount Balance: %.2f", a[i].accbal);
                printf("\n----------------------");
            }
            break;

        // SEARCH
        case 3:
            printf("\nEnter Account No to search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (a[i].accno == id)
                {
                    printf("\nRecord Found");
                    printf("\nAccount No: %d", a[i].accno);
                    printf("\nCustomer Name: %s", a[i].custname);
                    printf("\nAccount Balance: %.2f", a[i].accbal);
                    temp = a[i];
                    printf("\n1- Withdrawal \n2. Deposit");
                    scanf("%d", &ct);
                    if (ct==1)
                    {
                        printf("\nAmout to withdrwal")
                    }
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
                    if (a[i].accno > a[j].accno)
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }

            printf("\nRecords Sorted by Account Number");
            break;

        // DELETE
        case 5:
            printf("\nEnter Account No to delete: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (a[i].accno == id)
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
                    a[i] = a[i + 1];
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