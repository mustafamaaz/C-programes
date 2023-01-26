#include<stdio.h>
#include<string.h>


void vowelcheck(char z[],int length){
int nonvo=0;
for (int i = 0;z[i]!='\0'; i++){   
    if ( (z[i]!='a') && (z[i]!='e') && (z[i]!='i') && (z[i]!='o') && (z[i]!='u')){
        z[nonvo]=z[i];
        nonvo++;
    }}
      z[nonvo]='\0';
      
}

int main(){
    char str1[100];
printf("Enter the string\n");
gets(str1);
int length1=strlen(str1);
   vowelcheck(str1,length1);
printf("%s",str1);

    return 0;
}