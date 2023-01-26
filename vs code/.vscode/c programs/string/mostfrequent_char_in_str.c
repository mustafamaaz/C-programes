#include <stdio.h>
#include <string.h>


char store_asci_in_ary(char a[])
{
   int  aryy[123]={0};

   for (int i = 0; a[i] != '\0'; i++)
   {
      int count = 0;
      int alp = 0;
      for (int j = i; a[j] != '\0'; j++)
      {

         if (a[i] == a[j])
         {
            count++;
            alp = a[i];
         }
      }
      if (alp != 0)
      {
         if (aryy[alp] == 0)
         {
            aryy[alp] = count;
         }
      }
   }

          
          for(int z=0;z<123;z++){
            if(aryy[z]==0){
               continue;
            }
            else{
               char temp=z;
            printf("[%c] is [%d]\n",temp,aryy[z]);
            }
          }
}

int main()
{
   char str[10];
   printf("Enter the string\n");
   gets(str);

   store_asci_in_ary(str);


   return 0;
}