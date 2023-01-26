#include <stdio.h>
float pi = 3.14159;
float b = 0.25;
float c = 14.125;
float pizza() {
   float diameter=10;
    float square= diameter*diameter;
    float area=b*pi*square;
    float slice= area /c;
    return slice;
}


int main() {
   float z= pizza() ;
    printf("No of slices is :%f",z);
   
    return 0;
}