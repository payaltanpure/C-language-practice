#include <stdio.h>
#include <string.h>

#define FLOORS 3
#define ROOMS 5
#define RATE 1000

// Validation function
int isValid(int floor, int room)
{
    if(floor < 0 || floor >= FLOORS || room < 0 || room >= ROOMS)
        return 0;
    return 1;
}

int main()
{
    int status[FLOORS][ROOMS] = {0};
    char name[FLOORS][ROOMS][50];
    char mobile[FLOORS][ROOMS][10];
    int days[FLOORS][ROOMS] = {0};

    int choice, floor, room;
    int i, j;

    while(1)
    {
        printf("\n\n===== HOTEL MANAGEMENT SYSTEM =====");
        printf("\n1. View Room Status");
        printf("\n2. Book Room");
        printf("\n3. Generate Bill");
        printf("\n4. Checkout Room");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {

        // ---------------- VIEW STATUS ----------------
        case 1:
            printf("\nRoom Status (0=Empty,1=Booked)\n");
            for(i=0;i<FLOORS;i++)
            {
                printf("\nFloor %d: ",i);
                for(j=0;j<ROOMS;j++)
                    printf("%3d",status[i][j]);
            }
            break;

        // ---------------- BOOK ROOM ----------------
        case 2:
            printf("Enter Floor (0-%d): ",FLOORS-1);
            scanf("%d",&floor);
            printf("Enter Room (0-%d): ",ROOMS-1);
            scanf("%d",&room);

            if(!isValid(floor, room))
            {
                printf("Invalid Floor or Room Number!");
                break;
            }

            if(status[floor][room] == 1)
            {
                printf("Room Already Booked!");
                break;
            }

            status[floor][room] = 1;

            printf("Enter Customer Name: ");
            scanf(" %[^\n]", name[floor][room]);

            printf("Enter Mobile Number: ");
            scanf("%s", mobile[floor][room]);

            printf("Enter Number of Days: ");
            scanf("%d",&days[floor][room]);

            printf("Room Booked Successfully!");
            break;

        // ---------------- BILL GENERATION ----------------
        case 3:
            printf("Enter Floor: ");
            scanf("%d",&floor);
            printf("Enter Room: ");
            scanf("%d",&room);

            if(!isValid(floor, room))
            {
                printf("Invalid Floor or Room Number!");
                break;
            }

            if(status[floor][room] == 1)
            {
                int total = days[floor][room] * RATE;

                printf("\n------ BILL ------");
                printf("\nCustomer Name: %s",name[floor][room]);
                printf("\nMobile: %s",mobile[floor][room]);
                printf("\nDays Stayed: %d",days[floor][room]);
                printf("\nRate per Day: %d",RATE);
                printf("\nTotal Bill: %d",total);
            }
            else
                printf("Room not booked!");
            break;

        // ---------------- CHECKOUT ----------------
        case 4:
            printf("Enter Floor: ");
            scanf("%d",&floor);
            printf("Enter Room: ");
            scanf("%d",&room);

            if(!isValid(floor, room))
            {
                printf("Invalid Floor or Room Number!");
                break;
            }

            if(status[floor][room] == 1)
            {
                status[floor][room] = 0;
                days[floor][room] = 0;
                strcpy(name[floor][room], "");
                strcpy(mobile[floor][room], "");
                printf("Checkout Successful!");
            }
            else
                printf("Room Already Empty!");
            break;

        // ---------------- EXIT ----------------
        case 5:
            printf("Thank You!");
            return 0;

        default:
            printf("Invalid Choice!");
        }
    }

    return 0;
}