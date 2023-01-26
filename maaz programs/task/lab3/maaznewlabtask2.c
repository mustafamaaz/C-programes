#include <stdio.h>

int main() {

  int first,second,third,val=123,answer;
  printf("Your given integer is 123\n");

  first= val /100;
  
  second=(val % 100)/10;
  
  third=val % 100 % 10;
  answer=(third*100)+(second*10)+(first*1);
 
  printf("The answer is :%d",answer);
    return 0;
}