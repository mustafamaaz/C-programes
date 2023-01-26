#include <stdio.h>
void myfun(int val) {
  int  first= val /100;
 int second=(val % 100)/10;
 int third=val % 100 % 10;
    int answer=(third*100)+(second*10)+(first*1);
    printf("After convertion third angle is :%d\n",answer);
}
int main() {
   myfun(123);
    return 0;
}