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

int main (){

char str[100];
printf("Enter the string\n");
gets(str);

                int lengt=length(str);
                int check = tocheck(str,lengt); 

if(check==lengt/2)
printf("string is plandrome\n   ");
else
printf("string is not plandrome\n   ");
    return 0;
}