// Online C compiler to run C program online
#include <stdio.h>
float yearlycost=100;
float monthlycost=15;
float monthlysubscriptionincome(float noOfuser){
    float result=monthlycost*noOfuser;
    return result;
}
float yearlysubscriptionincome(float noOfuser){
    float result=yearlycost*noOfuser;
    return result;
}
int main() {
    float year,month;
printf("Enter the no of users availed yearly subscription:\n ");
  scanf("%f",&year);
printf("Enter the no of users availed monthly subscription:\n ");
   scanf("%f",&month);
   float result=monthlysubscriptionincome(month)+yearlysubscriptionincome(year);
   
   printf("%.2f$",result);
   
    return 0;
}