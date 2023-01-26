
               WHILE LOOP EXERCISE 3


#include <stdio.h>

   int main() {
   int num1,num2,sum;
    
   printf("Enter number 1: ");
   scanf("%d",&num1);
   printf("Enter number 2: ");
   scanf("%d",&num2);
   sum=num1 + num2;
   
   while(sum<=20) 
   {
    
      
   printf("Enter number again \nEnter number 1: ");
   scanf("%d",&num1);
   printf("Enter number 2: ");
   scanf("%d",&num2);
   sum=num1 + num2;
   
   }
   if (sum>20) 
       {
   printf("%d  is the sum of two number",sum);
       }
    return 0;
}





              FOR LOOP EXERSICE 3


#include <stdio.h>

   int main() {

   int num1,num2,sum;
   printf("Enter number 1: ");
   scanf("%d",&num1);
   printf("Enter number 2: ");
   scanf("%d",&num2);
   sum=num1 + num2;
   for (;sum<=20;) {
   printf(" Enter number again\n Enter number 1: ");
   scanf("%d",&num1);
   printf("Enter number 2: ");
   scanf("%d",&num2);
   sum=num1 + num2;
   }  
   if (sum>20) {
   printf("%d",sum);
   } 
   return 0;
   }



