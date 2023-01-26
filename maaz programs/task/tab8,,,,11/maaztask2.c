#include <stdio.h>
#include <stdbool.h>
int main()
{
   int num1,num2,i,j,prime;

   printf("Enter the two numbers :\n");
   scanf("%d \n %d",&num1,&num2);

   printf("prime number present in between %d and %d is below:\n",num1,num2);

   for(i=num1+1;i<num2;i++)
   {
      prime=false;
      for(j=2;j<=i/2;++j)
      {
         if(i%j==0)
         {
            prime=true;
            break;
         }
      }
      if(prime==false)
      {
         printf("%d\n",i);
      }
   }
   return 0;
}