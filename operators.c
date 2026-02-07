#include <stdio.h>
int main()
{
    /*int a , b ,c, d, e,g, h;
    float f;
    printf("Enter the three numbers:");
    scanf("%d %d %d", &a,&b, &h);

    // arithmetic operator
    c= a+b;
    d= a-b;
    e= a*b;
    f= a/b;
    g= a%b;
    printf("\nAddition:%d",c);
    printf("\nSub:%d",d);
    printf("\nMul:%d",e);
    printf("\nDiv:%f",f);
    printf("\nMod:%d",g);


    // relational operator
    printf("\n<:%d", a<b);
    printf("\n>:%d", a>b);
    printf("\n<=:%d", a<=b);
    printf("\n>=:%d", a>=b);
    printf("\n==:%d", a==b);
    printf("\n!=:%d", a!=b);


    // logical operator
    printf("\n &&:%d", a>b&&b>a);
    printf("\n ||:%d", a>b||b>a);
    printf("\n ! (a > b) : %d", !(a > b));
    printf("\n ! (a > b && b > a) : %d", !(a > b && b > a));



    // conditional operator
    int m,n,p;
    printf("\nEnter the three numbers:");
    scanf("%d %d %d", &m,&n, &p);
    int res= m>n ? (m>p ? m:p) : (n>p?n:p);
    printf("\n greater in 3 numbers:%d", res);



    // assigment operator
    int y, q;
    printf("\nEnter the two numbers:");
    scanf("%d %d ", &y, &q);// 2,3
    printf("\n +=:%d", y+=q); // y=y+q   y = 2+3=5
    printf("\n -=:%d", y-=q); // y=y-q   y= 5-3= 2
    printf("\n *=:%d", y*=q); // y=y*q   y = 2* 3= 6
    printf("\n /=:%d", y/=q); // y=y/q   y = 6/3= 2
    printf("\n mod=:%d", y%=q); // y=y%q   y = 2%3= 2

    //increment decrement operator
    int s=5;
    int r = 2;
    int k=4;
    int u=3;
    int r1,r2,r3,r4;
    r1= ++s;
    printf("\n++a:%d", r1);
    r2= r++;
    printf("\na++:%d", r2);
    r3= --k;
    printf("\n--a:%d", r3);
    r4= u--;
    printf("\na--:%d", r4);

    //bitwise operator

    int a= 5;
    int b= 3;
    printf("\n%d", a&b);
    printf("\n%d", a|b);
    printf("\n%d", a^b);
    //printf("%d", a ~ b);
    printf("\n%d", a>>1);
    printf("\n%d", a<<1);*/

    int n=3;
    if (n & 1) // if 1 true so if block execute 
    printf("Odd");
    else //if 0 false else block execute
    printf("Even"); 

     /*n = 8 → 1000
     1     → 0001
     ------------
     n & 1 → 0000 → 0 (FALSE)

        n = 5 → 0101
        1     → 0001
        ------------
        n & 1 → 0001 → 1 (TRUE)

     
     */

    return 0;
}