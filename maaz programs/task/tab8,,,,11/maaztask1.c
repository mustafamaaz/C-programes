#include <stdio.h>
char check;
 int n;
 char a='y',b='Y';
 char c='n',d='N';
 
void table(int n) {
    do {
         printf("Enter the number\n");
         scanf("%d",&n);
    for(int i=1;i<=10;i++){
         printf("%d * %d = %d\n",n,i,n*i);}
         
          printf("Do you want to print table again?\npress Y/N?\n");
          scanf("%s",&check);
     if (check==c || check==d)
          printf("thank you for using our program\n");
     else if ( (check!=c && check!=d ) && (check!=a && check!= b )) {
           printf("invalid input\n"); }
        } while(check==a || check== b);
               }

int main() {
  table( n);
    return 0;
}