#include <stdio.h>

int main() {
    int opt;
    float feet,inches,centimeter,second,minutes,hour,days;
  printf("1) feet into inches\n2) feet into cm\n3) second  into minutes\n4) second  into hour\n5) second  into days\n6) Hour into minutes\n7) Hour into second\nfor exit press 0\nselect option which you want\n");
   printf("for exit press 0\n");
  scanf("%d",&opt);
 
  if(opt==1) {
      printf("\b       Feet convert into inches\n\n");
      scanf("%f",&feet);
     inches = 12 * feet;
    printf("After conversion feet= %.2f inches",inches);
  }
  else if(opt==2) {
      
      printf("\b       Feet convert into centimeter\n\n");
    scanf("%f",&feet);
     centimeter = 30 * feet;
    printf("After conversion feet= %.2f cm",centimeter);

  }
  else if(opt==3) {
       printf("second convert into minutes\n");
    scanf("%f",&second);
     minutes = second / 60;
    printf("answer= %.2f minutes ",minutes);
  }
  else if(opt==4){
       printf("second convert into hour\n");
       scanf("%f",&second);
     hour = second / 3600;
    printf("Answer= %.2f hour",hour);
  }
   else if(opt==5){
      printf("\b       second convert into days\n");
      scanf("%f",&second);
    days = second /86400;
    printf("Answer= %.2f days",days);
  }
   else if(opt==6){
       printf("Hour convert into minutes\n");
       scanf("%f",&hour);
     minutes = 60 * hour;
    printf("Answer= %.2fmin",minutes);
  }
   else if(opt==7){
      printf("Hour convert into second\n");
      scanf("%f",&hour);
     second = 3600 * hour;
    printf("Answer= %2.f second",second);
  }
  else if(opt==0) {
      printf("the program has quit\n");
  }
    return 0;
}