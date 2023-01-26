#include<stdio.h>
#include<string.h>
int tocheck(char b[],int character){
int count=0;
for (int i = 0; b[i]!='\0'; i++){
    if (b[i]==character)
         count++;
    }
return count;
}

int main (){
    char str[100];
    char alp;
    int result;
    printf("Enter the string \n");
    gets(str);
    // length_1 = strlen(str);
    printf("Enter the character for check frequency\n");
    scanf("%c",&alp);
    
      result = tocheck(str,alp);
      
 printf("frequency of [%c] is [%d] ",alp,result);

    return 0;
}