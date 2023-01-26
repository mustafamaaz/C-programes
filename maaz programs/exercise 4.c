#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the number a\n");
    scanf("%d",&a);
    printf("Enter number b\n");
    scanf("%d",&b);
    printf("Enter number c\n");
    scanf("%d",&c);
    
    if (a>b && a>c) {
    printf("The largest:%d\n",a); }
    
    else if ( b>c  && b>a){
    printf ("the biggest  is %d\n",b);
    }
    else if (c>b  && c>a) {
        printf("the bigger is %d",c);
    }
    
       return 0;
}