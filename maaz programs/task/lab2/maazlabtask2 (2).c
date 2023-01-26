
#include <stdio.h>

int main() {
   float BMI;
   float  weight=50;
   float height=2;
   
   BMI=weight/(height*height);
   printf("The body mass index is %.3f",BMI);
    return 0;
}