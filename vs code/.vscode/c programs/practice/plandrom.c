#include <stdio.h>
int main() {
    int num,n,result=0,rem;
    printf("Enter the number\n");
    scanf("%d",&num);
    n=num;
    while(n!=0) {
        rem=n%10;
        result=(result*10)+rem;
        n=n/10;
    }
     printf("After reverse value is %d",result);
    if(result==num) 
        printf("\nplandrome");
    else 
        printf("\nnot plandrome");
    return 0;
}