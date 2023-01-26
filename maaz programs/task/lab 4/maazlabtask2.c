#include <stdio.h>
#define per_unit  5
int main() {
   int present_unit,original_unit,previous_unit,bill;
   printf("Enter the present units\n");
   scanf("%d",&present_unit);
    printf("Enter the previous units\n");
    scanf("%d",&previous_unit);
    original_unit = present_unit - previous_unit;
    printf("unit consume in this months is :%d\n",original_unit);
    bill=original_unit * per_unit;
    printf("Total bill for this month is %d\n",bill);
    return 0;
}