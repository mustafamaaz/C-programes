// Online C compiler to run C program online
#include <stdio.h>

int main() {
  float bud,expen,total=0,los,profit;
  char opt;
  printf("Enter budjet of month \n");
  scanf("%f",&bud);
  
  do{
  printf("Enter your expensis\n");
  scanf("%f",&expen);
  total=expen+total;
  printf("if you have more expenses\npress Y/y\n");
  scanf("%s",&opt);
  printf("your expensis is :%.2f\n",total);
  }while(opt=='y' || opt=='Y');
  
  if(total>bud){
       los=total-bud;
 printf("you spend money more then your budjet is %.2f \n",los);
  }
  else if(bud>total){
    profit=bud-total;
    printf("you save money from your budjet is %.2f \n",profit);
  }
    return 0;
}