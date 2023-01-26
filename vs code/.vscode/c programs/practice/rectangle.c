#include <stdio.h>

int main()
{
   int dim;
   printf("Enter the dimention of rectangle\n");
   scanf("%d",&dim);
   printf("\n\n\n");
   

   for (int i = 1; i <= dim; i++)
   {
      for (int j = 1; j <= dim; j++)
      {
         if (j > 1 && j < dim && i > 1 && i < dim)
         {
            printf("   ");
            continue;
         }
         printf(" * ");
      }
      printf("\n");
   }

   return 0;
}