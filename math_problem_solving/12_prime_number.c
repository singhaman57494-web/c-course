//              prime number print

# include <stdio.h>

int main ()
{
   int n;
   
   printf("enter number : ");
   scanf("%d", &n);

   int prime = 1; // 1 = prime, 0 = not prime

   for(int i = 2; i < n; i++)
   {
        
        if((n % i == 0))
        {
            prime = 0;    
        }
  
    }
    if(n <= 1)
    {
         printf("not prime");
    }
    else if (prime == 1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }

   return 0;
}