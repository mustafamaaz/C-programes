#include<stdio.h>

int friendlypair(int a,int b){
float div1=0,div2=0,result1,result2;
for (int i = 1; i <= a; i++){
    if(a%i==0){
       div1=div1+i;
       }}

   result1=div1/a;

   for (int i = 1; i <= b; i++){
    if(b%i==0){
       div2=div2+i;
       }}

result2=div2/b;

if(result1==result2)
printf("\nthis numbers is friendly pair\n");
else
printf("\nthis numbers is not friendly pair\n");

}

int main(){
    float num1,num2;
printf("Enter no one\n");
scanf("%f",&num1);
printf("Enter no two\n");
scanf("%f",&num2);

friendlypair(num1,num2);
    return 0;
}