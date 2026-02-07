# include <stdio.h>
#include <string.h>
int main()
{
    int choice, accbal=5000, amount, amount1, balance, balance1,total_balance ;
    int  rate=12, months, months2 ;
    float interest, loan_amt, payable, interest2 , amount2, amount3;
    char uname[20], pass[10], uname1[20], pass1[10];
    printf("\n******************Banking Application**********************");
    menu:
    printf("\nMenu");
    printf("\n1. Create Account");
    printf("\n2. Deposit");
    printf("\n3. Withdraw");
    printf("\n4. Fixed");
    printf("\n5. Loan");
    printf("\n6. Check Available Balance");
    printf("\n7. Exit");
    printf("\nEnter your Choice:");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("\nEnter your account details:");
            printf("\nEnter your username:");
            scanf("%s", &uname);
            printf("\nPassword:");
            scanf("%s", &pass);
            printf("\n user name:%s", uname );
            printf("\n pass:%s", pass );
            break;
        
        case 2:
            printf("\nWelcome to deposit the money in bank");
            printf("\nEnter your username:");
            scanf("%s", &uname1);
            printf("\nPassword:");
            scanf("%s", &pass1);
            if (strcmp(uname , uname1) == 0 && strcmp(pass , pass1) == 0)
            {
                printf("\nEnter money to be deposited:");
                scanf("%d", &amount);
                printf("\nAmount deposited");
                balance = accbal +amount;
                printf("\n Account balance is:%d", balance);
                accbal += amount;
            } 
            else
                printf("Invalid Credentials");
            
            break;
            
        case 3:

            printf("\nWelcome to withdraw the money in bank");
            printf("\nEnter your username:");
            scanf("%s", &uname1);
            printf("\nPassword:");
            scanf("%s", &pass1);
            if (strcmp(uname , uname1) == 0 && strcmp(pass , pass1) == 0)
            {
                printf("\nEnter amount to be withdraw:");
                scanf("%d", &amount1);
                if (amount1 ==  balance )
                {
                    printf("\nBank account should hold atleast 2000 rupess");
                }
                else if ( amount1 > balance)
                {
                    printf("\nInsufficient Balance in account");
                }
                else 
                {
                    accbal -= amount1;
                    printf("\nAmount withdraw successfull");
                    printf("\nBalance in account is: %d", accbal);

                }
            } 
            else
                printf("Invalid Credentials");
             

            break;


            case 4:
            printf("\nWelcome to fix the money in bank");
            printf("\nEnter your username:");
            scanf("%s", &uname1);
            printf("\nPassword:");
            scanf("%s", &pass1);
            if (strcmp(uname , uname1) == 0 && strcmp(pass , pass1) == 0)
            {
                printf("\nWelcome to fixing amount section:");
                printf("\nEnter the amount you want to fix:");
                scanf("%f", &amount2);
                printf("\nThe rate for interest is 12 precent");
                printf("\n Interest on one month fixing will be:%.2f ",amount2 * rate* (1/12.0)/100);
                printf("\n Interest on two month fixing will be:%.2f ",amount2 * rate* (2/12.0)/100);
                printf("\n Interest on six month fixing will be:%.2f ",amount2 * rate* (6/12.0)/100);
                printf("\n Interest on tweleve month fixing will be:%.2f ",amount2 * rate* (12/12.0)/100);
                printf("\nEnter the month for which u want to fix the amount:");
                scanf("%d",&months);
                interest = amount2 * rate * (months/12.0)/100;
                amount2+=interest;
                printf("\nThe amount will  become %f after %d months by 12 percent interest", amount2,  months);
            } 
            else
                printf("Invalid Credentials");
             

            

               break;

            case 5:
            printf("\nWelcome to  loan section of bank");
            printf("\nEnter your username:");
            scanf("%s", &uname1);
            printf("\nPassword:");
            scanf("%s", &pass1);
            if (strcmp(uname , uname1) == 0 && strcmp(pass , pass1) == 0)
            {
                if (accbal <=2000)
                {
                    printf("\nYou cant get the loan from the bank as the balance is insufficient");
                }
                else
                {
                    float accbal2 = accbal;
                    printf("\nWelcome to loan section:");
                    printf("\nYou are eligible for taking loan");
                    printf("\nEnter the month for which u want to take the loan:");
                    scanf("%d",&months2);
                    loan_amt = accbal2 * 70 / 100.0;
                    interest2 = (loan_amt * 12 *  months2) / (12.0 * 100);
                    payable = loan_amt + interest2;
                    printf("\n Your account balace is :", accbal);
                    printf("\nYou will get loan of %f on %f account balance for %d months", loan_amt, accbal2, months2 );
                    printf("\nYour payable amount will be : %f", payable);
                }
            } 
            else
                printf("Invalid Credentials");

            break;

            case 6:
               printf("\nCheck balance of your account here:");
               printf("\nWelcome to deposit the money in bank");
                printf("\nEnter your username:");
                scanf("%s", &uname1);
                printf("\nPassword:");
                scanf("%s", &pass1);
                if (strcmp(uname , uname1) == 0 && strcmp(pass , pass1) == 0)
                {
                        total_balance=  accbal;
                        printf("\nYour current account balance is :%d", total_balance);
                }
                else
                {
                    printf("\nInvalid credentials");
                }

                break;
            

            case 7:
               printf("\nThankyou for using application:");
               return 0;



        default:
            printf("\nInvalid input");
            break;
        }
goto menu;
    return 0;
}