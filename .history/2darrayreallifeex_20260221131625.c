#include <stdio.h>
#include <string.h>

#define FLOORS 3
#define ROOMS 5
#define RATE 1000

struct Room
{
    int status;           
    char name[50];
    char mobile[15];
    int days;
};

int main()
{
    struct Room hotel[FLOORS][ROOMS];
    int choice, floor, room;
    int i, j;

    // Initialize all rooms as empty
    for(i=0;i<FLOORS;i++)
        for(j=0;j<ROOMS;j++)
            hotel[i][j].status = 0;

    while(1)
    {
        printf("\n===== HOTEL MANAGEMENT SYSTEM =====");
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
                        printf("%3d",hotel[i][j].status);
                }
                break;

            // ---------------- BOOK ROOM ----------------
            case 2:
                printf("Enter Floor (0-%d): ",FLOORS-1);
                scanf("%d",&floor);
                printf("Enter Room (0-%d): ",ROOMS-1);
                scanf("%d",&room);

                if(hotel[floor][room].status == 0)
                {
                    hotel[floor][room].status = 1;

                    printf("Enter Customer Name: ");
                    scanf("%s",hotel[floor][room].name);

                    printf("Enter Mobile Number: ");
                    scanf("%s",hotel[floor][room].mobile);

                    printf("Enter Number of Days: ");
                    scanf("%d",&hotel[floor][room].days);

                    if (floor < 0 || floor >= 3 || room < 0 || room >= 5) {
    cout << "Invalid Floor or Room Number!" << endl;
}
else if (rooms[floor][room] == 1) {
    cout << "Room Already Booked!" << endl;
}
else {
    rooms[floor][room] = 1;
    cout << "Room Booked Successfully!" << endl;
}
                break;

            // ---------------- BILL GENERATION ----------------
            case 3:
                printf("Enter Floor: ");
                scanf("%d",&floor);
                printf("Enter Room: ");
                scanf("%d",&room);

                if(hotel[floor][room].status == 1)
                {
                    int total = hotel[floor][room].days * RATE;

                    printf("\n------ BILL ------");
                    printf("\nCustomer Name: %s",hotel[floor][room].name);
                    printf("\nMobile: %s",hotel[floor][room].mobile);
                    printf("\nDays Stayed: %d",hotel[floor][room].days);
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

                if(hotel[floor][room].status == 1)
                {
                    hotel[floor][room].status = 0;
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