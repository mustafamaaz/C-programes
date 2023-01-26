#include <stdio.h>

int main() {
   
    float length,width,area;
   printf("Enter the length of rectangle\n");
   scanf("%f",&length);
   printf("Enter the width of rectangle\n");
   scanf("%f",&width);
  area= length * width;
   printf("the area of rectangle is %.2f",area);

    return 0;
}