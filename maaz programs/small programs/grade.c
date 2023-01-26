#include <stdio.h>

int main() {
    int marks,Grade;
    float division;
    printf("Enter your marks of four subject\n");
    scanf("%d",&marks);
    Grade= marks /  (float)4;
    printf("the Grade is %d\n",Grade);
    
    if(Grade>=50){
        printf("congragulation you have passed\n");
    }
     else if(Grade<50)
   {
printf("do hardwork you are fail\n");
   }
    return 0;
}