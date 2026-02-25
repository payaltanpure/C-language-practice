#include <stdio.h>

#define FLOORS 3
#define ROOMS 5
#define RATE 1000

int main()
{
    int hotel[FLOORS][ROOMS] = {0};  // All rooms initially free
    int choice;
    int floor, room, days;
    int bill;

    while(1)
    {
        printf("\n===== HOTEL MANAGEMENT SYSTEM =====");
        printf("\n1. Book Room");
        printf("\n2. View Room Status");
        printf("\n3. Checkout ");
        printf("\n4. Generate Bill");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // ---------------- BOOK ROOM ----------------
            case 1:
                printf("Enter Floor (0-%d): ", FLOORS-1);
                scanf("%d", &floor);
                printf("Enter Room (0-%d): ", ROOMS-1);
                scanf("%d", &room);

                if(floor>=0 && floor<FLOORS && room>=0 && room<ROOMS)
                {
                    if(hotel[floor][room] == 0)
                    {
                        hotel[floor][room] = 1;
                        printf("Room Booked Successfully!");
                    }
                    else
                        printf("Room Already Booked!");
                }
                else
                    printf("Invalid Floor or Room Number!");
                break;

            // ---------------- VIEW STATUS ----------------
            case 2:
                printf("\nRoom Status (0=Available, 1=Booked)\n");
                for(int i=0;i<FLOORS;i++)
                {
                    printf("\nFloor %d: ", i);
                    for(int j=0;j<ROOMS;j++)
                    {
                        printf("%3d", hotel[i][j]);
                    }
                }
                break;

            // ---------------- CHECKOUT ----------------
            case 3:
                printf("Enter Floor: ");
                scanf("%d", &floor);
                printf("Enter Room: ");
                scanf("%d", &room);

                if(floor>=0 && floor<FLOORS && room>=0 && room<ROOMS)
                {
                    if(hotel[floor][room] == 1)
                    {
                        hotel[floor][room] = 0;
                        printf("Room Checkout Successful!");
                    }
                    else
                        printf("Room Already Empty!");
                }
                else
                    printf("Invalid Input!");
                break;

            // ---------------- BILL GENERATION ----------------
            case 4:
                printf("Enter Floor: ");
                scanf("%d", &floor);
                printf("Enter Room: ");
                scanf("%d", &room);

                if(floor>=0 && floor<FLOORS && room>=0 && room<ROOMS)
                {
                    if(hotel[floor][room] == 1)
                    {
                        printf("Enter Number of Days Stayed: ");
                        scanf("%d", &days);

                        bill = days * RATE;
                        printf("\n----- BILL DETAILS -----");
                        printf("\nFloor: %d", floor);
                        printf("\nRoom: %d", room);
                        printf("\nDays: %d", days);
                        printf("\nRate per day: %d", RATE);
                        printf("\nTotal Bill: %d", bill);
                    }
                    else
                        printf("Room is not booked!");
                }
                else
                    printf("Invalid Input!");
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