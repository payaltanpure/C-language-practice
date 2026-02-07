#include <stdio.h>
int main()
{
    /*
    int a =1;
    do 
    {
        printf("Hello: %d\n", a);
        ++a; // we can use a++ also
    }
    while(a<=5);
    printf("\n------------------");
    int i =0;
    do 
    {
        printf("\nHello: %d", i);
        ++i; // we can use a++ also
    }
    while(i<=4);



    int a=0;
    printf("\nEven nos:");
    do
    {
        if (a%2==0)
        {
            printf("\n%d",a);
        }
        a++;

    } while (a<=100);

    int i =1, sum;
    do 
    {
        sum = sum +i;
        i++;
    } 
    while(i<=10);
    printf("\nSum of first 10 natural nos is:%d", sum); 

    
    int a=0;
    int sum=0;
    
    do
    {
        if (a%2==0)
        {
            sum= sum+a;
        }
        a++;

    } while (a<=100);
 
    printf("\nSum of first 100 even nos is:%d", sum); 


    
    int a=0;
    do
    {
        if (a%5==0)
        {
            printf("\n%d", a);
        }
        a++;

    } while (a<=100); 

    int i=1;
    int sumeven =0, sumodd =0 , total;
    do 
    {
        if ( i%2==0)
        {
            sumeven= sumeven + i;
        }
        else 
        {
           sumodd +=i; 
        }
        i++;
    
    }
    while(i<=120);
    printf("\n Sum of  even nos:%d", sumeven);
    printf("\n Sum of  odd nos:%d", sumodd);
    printf("\n Total sum:%d", sumeven+sumodd); */


   int a =2;
   int i=1;
   do 
   {
    printf("\n %d * %d  = %d" , a, i, a*i );
    i++;
   }
   while(i<=10);


    return 0 ;
}