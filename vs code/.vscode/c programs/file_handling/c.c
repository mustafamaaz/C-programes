#include<stdio.h>

int main(){

FILE *ptr;
char str[2];
ptr=fopen("GfgTest.txt","r");

fgets(str,50,ptr);
printf("  %s  ",str);



fclose(ptr);





    return 0;
}