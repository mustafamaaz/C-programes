#include <stdio.h>
#define z  180
float myfun(float angle1,float angle2) {
    float gama = z-(angle1+angle2);
    return gama;
     
}
int main() {
   float a=myfun(10.34,10);
 printf("After convertion third angle is :%.3f\n",a);
     
    return 0;
}