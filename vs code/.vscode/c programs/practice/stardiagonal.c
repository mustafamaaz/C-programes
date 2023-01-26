#include <stdio.h>

int main()
{
   int dim;
   printf("Enter the dimention of rectangle\n");
   scanf("%d",&dim);
   printf("\n\n\n");
   int opt=dim;
   int temp=dim/2;
   temp=temp+1;
   int count=0;
   

   for (int i = 1; i <= dim; i++)
   {
      for (int j = 1; j <= dim; j++)
      {
         if (j == i || j == opt )
         {
            printf(" %d ",count++);
            continue;
         }
         printf("  ");
      }
       opt--;
        printf("\n");
    
     
     
   }

   return 0;
}


    