#include <stdio.h>

int main() {
    int num1,num2,num3,num4,num5,sum;
    //int a=200;
    float p=0.1,per;
   printf("Enter the markes of chemistry\n");
   scanf("%d",&num1);
    printf("Enter the markes of physics\n");
   scanf("%d",&num2); 
 printf("Enter the markes of maths\n");
 scanf("%d",&num3);
  printf("Enter the markes of bio\n");
  scanf("%d",&num4);
  printf("Enter the markes of computer\n");
 scanf("%d",&num5); 
 sum=num1 +num2+num3 +num4+num5;
 per=sum * p;
 if(per>=90){
     printf("Grade A");
 } 
 else if(per>=80){
  printf("Grade B"); }
  else if(per>=70){
  printf("Grade C"); }
  else if(per>=60){
  printf("Grade D"); }
  else if(per>=40){
  printf("Grade E"); }
  else if(per<=40){
  printf("Grade F"); }
  
  
    return 0;
}