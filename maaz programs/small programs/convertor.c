#include <stdio.h>

int main() {
    
    float length,result;
    int feet=30;
   printf("enter length in cm\n");
   scanf("%f",&length);
   result=length * feet;
   printf("Lft convert into %.2f Lcm ",result);

    return 0;
}