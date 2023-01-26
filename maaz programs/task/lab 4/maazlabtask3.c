
#include<stdio.h>
int main() {
    float charges,tax,total_cost,tip,meal_cost;
    float a=0.047;
    float b=0.1;
    printf("\tEnter the charges of meal\n");
 scanf("%f",&charges);
    tax= a * charges;
    printf("\tTax of meal is: %.2f$\n",tax);
 total_cost=tax+charges;
 tip=b*total_cost;
    printf("\tTip of the meal:%.2f$\n",tip);
 meal_cost=charges-tax-tip;
    printf("\tMeal cost (tax and tip not included) %.2f$\n",meal_cost);
    printf("\tMeal  ( tax and tip included) %.2f$\n",charges);
    return 0;
}