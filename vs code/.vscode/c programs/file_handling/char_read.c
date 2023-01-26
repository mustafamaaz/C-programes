#include<stdio.h>

int main(){
 FILE *ptr = NULL;
      ptr=fopen("file.txt","r");
      char c;

         c=fgetc(ptr);
      printf("The charatcer i read was: %c\n",c);
      c=fgetc(ptr);
      printf("The charatcer i read was: %c\n",c);
      c=fgetc(ptr);
      printf("The charatcer i read was: %c\n",c);
      c=fgetc(ptr);
      printf("The charatcer i read was: %c\n",c);
      c=fgetc(ptr);
      printf("The charatcer i read was: %c\n",c);
       fclose(ptr);

    return 0;
}