#include <stdio.h>

int main() {
    char opt,opt_1,opt_2;
    char q='Y',r='y';
   char w='Y',t='y';
    char y='N',u='n';
   printf("Do you want a burger? Y/N\n");
   scanf("%s",&opt);
   int burger_price=500,total_price;
   
if (q==opt || r==opt) {
    printf("Burger added\n");
printf("Do you want a fries and drink as addon? just for 200 Rs? Y/N\n");
scanf("%s",&opt_1);
if( w==opt_1 || t==opt_1) {
    total_price=burger_price +200;
    printf("\nThank you\nYour total bill is:700\n"); }
    else if(y==opt_1 || u==opt_1) {
        printf("Your choice!Thank you\nYour total bill is:%d\n",burger_price);
    }
}
else if(y==opt || u==opt) {
        printf("No problem. see you next time\n");
    }
    return 0;
}

