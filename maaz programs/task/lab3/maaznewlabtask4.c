#include <stdio.h>

int main() {
    float hour,sec,thi,four;
    int x=5000;
    printf("Second converts into hours minutes seconds\n");
  hour= x / 3600;
  sec= x % 3600;
  thi=( x % 3600)/60;
  four=( x % 3600) % 60;
 
  printf("hour:%.2f\nminutes:%.2f\nseconds:%.2f\n",hour,thi,four); 
  
    return 0;
}