#include <stdio.h>
union Account
{
    int accno;
    char cname[2];
    float accbal;
};
int main()
{
   union Account acc;
   printf("\nSize of ")
}