#include <stdio.h>

int main() {
int a=7,b=8,x;
printf(" a= 7 and b =8\n");
x=a; a=b; b=x;
printf(" a= %d\n",a);
printf(" b=%d\n",b);
    return 0;
}