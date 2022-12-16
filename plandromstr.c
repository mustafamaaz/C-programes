#include<stdio.h>

int length(char a[]){
int i=0;
    while (a[i]!='\0')
    {
    i++;
    }
    return i;    
}

int  tocheck(char b[],int length){
    char count=0;
    int m=length-1;
     for (int i = 0; i<length/2; i++){
    
    if(b[i]==b[m]){
       count++;
    }
    m--;
}
return count;
}

 void caseinsensitive(char c[],int length){
    char alp;
for (int i = 0; c[i]!='\0'; i++){
    int asci=c[i];
    if(asci>=65 && asci<=90){
        alp=asci;
        c[i]=alp;
    }
    else if (asci>=97 && asci<=122){
       alp=asci-32;
       c[i]=alp;
    }}}


void space(char d[],int length){
       int nonspace=0;
       for (int i = 0; d[i]!= '\0'; i++){
    
        if (d[i] != ' '){

        d[nonspace]=d[i];
        nonspace++;
        }}

        d[nonspace]='\0';
    }

int main (){

char str[100];
printf("Enter the string\n");
gets(str);

                int lengt=length(str);
                     space(str,lengt);
             int length_1=length(str);
           caseinsensitive(str,length_1);  
       int check = tocheck(str,length_1); 

         printf("%s\n",str);
 
             int length_2=length(str);

if(check==length_1/2 || check==length_2/2 )
printf("string is plandrome\n   ");
else
printf("string is not plandrome\n   ");
    return 0;
}