#include<stdio.h>
#include<string.h>
#define jump 3
int encryption(char str1[]){
    int len1=strlen(str1);
    for (int i = 0; i < len1; i++)
        str1[i]=((str1[i]-'a'+jump)%26+'a');
    
    printf("\n Encrypted\n\n");
    for (int  i = 0; i < len1; i++)
        printf("%c",str1[i]);
    
}

int decryption(char str2[]){
    int len2=strlen(str2);
    
    for (int i = 0; i < len2; i++)
        str2[i]=((str2[i]-'a'-jump+26)%26+'a');
    
    printf("\n Decrypted\n\n");
    for (int  i = 0; i < len2; i++)
        printf("%c",str2[i]);
    
}



int main (){

char str[100];
printf("Enter the string\n");
gets(str);
encryption(str);
decryption(str);
       
    return 0;
}