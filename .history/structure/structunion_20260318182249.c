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
   printf("\nSize of union account is :%d", sizeof(acc));
   acc.accno= 101;
   printf("\nAccount no:%d", acc.accno);
   strcpy(acc.cname, "Payal");
   printf("\nCust Name:%s", acc.cname);
}