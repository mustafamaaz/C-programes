#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num>0) {
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    } else if  (num==0){
        printf("0 is alse even");
    }
    if(num<0) {
    if(num % 2 == 0)
        printf("%d is Negative  even.", num);
    else
        printf("%d is negative odd.", num);
    }
    
    
    return 0;
}