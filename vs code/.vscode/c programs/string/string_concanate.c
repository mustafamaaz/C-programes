#include<stdio.h>
#include<string.h>
int main (){
int count=0;
char str1[100];
gets(str1);
int length = strlen(str1);
char str2[100];
 gets(str2);
int length1 = strlen(str2);
   //strcat();
int total=length+length1;

for (int  i = length; i < total; i++)
{
     str1[i]=str2[count];
     count++;
}
//str1[count]='\0';


printf(" combine string is [%s]",str1);
    return 0;
}