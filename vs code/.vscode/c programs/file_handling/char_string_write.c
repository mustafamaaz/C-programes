#include<stdio.h>

int main(){
 FILE *ptr = NULL;
      ptr=fopen("file1.txt","a");

     fputc('z',ptr);
     fputc('m',ptr);
     fputc('a',ptr);
     fputc('a',ptr);
     fputc('z',ptr);
    

     printf("\n");
     fputs(" This is amazing ",ptr);
     
    //   printf("The string i read was: %s\n",str);
     
       fclose(ptr);

    return 0;
}