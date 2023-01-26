#include <stdio.h>
float a=0.2;
int main() {
    float amt,profit,q,selling_price;
printf("Enter the price of board\n");
scanf("%f",&amt);
q=amt;
profit= a * q;
selling_price=profit+amt;
printf("selling  price of board %.2f\n",selling_price);
printf("original price is %.2f",amt);
    return 0;
}