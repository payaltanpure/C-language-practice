#include <stdio.h>

/* Function Declarations */
void factorial(int n);
void factors(int n);
void prime(int n);
void reverse(int n);
void power(int base, int exp);

int main()
{
    int ch, num, base, exp, ct;

    do
    {
        printf("\n\n===== MENU =====");
        printf("\n1. Factorial of number");
        printf("\n2. Factors of number");
        printf("\n3. Prime number check");
        printf("\n4. Reverse number");
        printf("\n5. Power of number");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter number: ");
                scanf("%d", &num);
                factorial(num);
                break;

            case 2:
                printf("Enter number: ");
                scanf("%d", &num);
                factors(num);
                break;

            case 3:
                printf("Enter number: ");
                scanf("%d", &num);
                prime(num);
                break;

            case 4:
                printf("Enter number: ");
                scanf("%d", &num);
                reverse(num);
                break;

            case 5:
                printf("Enter base: ");
                scanf("%d", &base);
                printf("Enter exponent: ");
                scanf("%d", &exp);
                power(base, exp);
                break;

            default:
                printf("Invalid choice!");
        }

        printf("\nEnter 1 to continue and 0 to exit: ");
        scanf("%d", &ct);

    } while(ct == 1);

    printf("Thank You!");
    return 0;
}

/* ---------------- FUNCTIONS ---------------- */

void factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %d", fact);
}

void factors(int n)
{
    int i;
    printf("Factors are: ");
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d ", i);
    }
}

void prime(int n)
{
    int i, flag = 0;

    if(n <= 1)
        flag = 1;

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Number is Prime");
    else
        printf("Number is Not Prime");
}

void reverse(int n)
{
    int rev = 0, rem;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("Reverse = %d", rev);
}

void power(int base, int exp)
{
    int i, result = 1;

    for(i = 1; i <= exp; i++)
        result *= base;

    printf("Power = %d", result);
}