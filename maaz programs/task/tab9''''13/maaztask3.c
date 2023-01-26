#include <stdio.h>
#include <string.h>

int check(int a[]){
    int length=strlen(a);
    if(length==8){
    return length;}
    else 
    return 1;
}


int specialchar(char a[]){
    int count=0;
    int length=strlen(a);
    
    for(int i=0;i<length;i++){
 if(a[i]=='%' || a[i]=='!'|| a[i]=='^' || a[i]=='&' || a[i] =='*')
        count=1;
    }
    
    if(count==1)
    return count;
    else 
    return 0;
}

int secret(char a[],char b[]){
    int count=0;
    for(int i=0;i<8;i++){
        if(a[i]==b[i])
        count=count+1;
    }
    if(count==8)
    return count;
    else 
    return 0;
}


int main() {
    char psword[100];
    char psword_1[100];
    char name[50];
    int length= strlen(name);
    int length_1= strlen(psword);
    int checking,special;
     printf("Enter the name\n");
    scanf("%s",name);
    do{
    printf("Enter the passward\n");
    scanf("%s",psword);
     checking= check(psword);
    
    special=specialchar(psword);
   
      if(checking==1 || special==0)
    printf("Enter valid passward again\n");
    }while(checking==1 || special==0);
     
printf("Enter the password to  display a secret msg\n");
scanf("%s",psword_1);

int result=secret(psword,psword_1);

if(result==8)
printf("\n\n***You know what? You can be a great programmer. Keep Coding!***\n\n");

else 
   printf("Passward was not match soory!!");

    return 0;
}