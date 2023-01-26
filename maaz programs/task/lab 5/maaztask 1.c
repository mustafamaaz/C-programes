#include <stdio.h>
#define z  1.8
void myfun(float a) {
    float f = z*a+32;
     printf("After convertion %.3f",f);
}
int main() {
   myfun(2);
    return 0;
}