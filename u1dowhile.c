   #include <stdio.h>
   int main()
   {

    int i,n;
    printf("\nenter the no till which we want the table:");
    scanf("%d", &n);
    for( i=1; i<=n; i++)
    {
        
        int m=1;
        do 
        {
            printf("\n %d * %d  = %d" , i, m, i*m );
            m++;
        }
        while(m<=10);
        printf("\n"); 
    }
  
   return 0;
}