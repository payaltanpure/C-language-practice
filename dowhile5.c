   #include <stdio.h>
   int main()
   {
    /*
    int i;
    for( i=1; i<=10; i++)
    {
        
        int m=1;
        do 
        {
            printf("\n %d * %d  = %d" , i, m, i*m );
            m++;
        }
        while(m<=10);
        printf("\n"); 
    }*/

    int i=1;
    do 
    {
        int j=1;
        do
        {
            printf("\n %d * %d = %d", i, j, i*j);
            j++;
        }
        while(j<=10);
        i++;
    }while (i<=10);
  
   return 0;
}