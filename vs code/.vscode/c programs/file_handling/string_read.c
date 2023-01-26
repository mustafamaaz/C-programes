#include<stdio.h>

int main(){
 FILE *ptr = NULL;
      ptr=fopen("file.txt","r");

      char str[1];

         fgets(str,40,ptr);
      printf("The string i read was: %s\n",str);
     
       fclose(ptr);

    return 0;
}