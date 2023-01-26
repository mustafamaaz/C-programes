#include<stdio.h>
#include<math.h>
#include<string.h>



  int reverse(char b[]){
int alp=0,con;

   for(int i = 0;b[i]!= '\0';i++)
   {
    if (b[i]==' '){
        for(int j=0 ;j<con;j++){
            char temp=b[j];
         b[j]=b[con-1];
         b[con-1]=temp;
         con--;
        }
        //j++;
        }
    else{ 
    alp++; 
    con=alp;
    }
    }}  

int main(){
char str[100];
printf("Enter the string\n");
gets(str);
  strrev(str);
  printf("%s\n\n\n",str);
  reverse(str);
  printf("%s",str);
      return 0;
}