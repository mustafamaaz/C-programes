#include <stdio.h>
void ages(int a,int b,int c); 
int main()
{
    int a,b,c;
    printf("Enter the age of first person\n");
    scanf("%d",&a);
    printf("Enter the age of second person\n");
    scanf("%d",&b);
    printf("Enter the age of third person\n");
    scanf("%d",&c);
     ages(a,b,c);
       return 0;
}
void ages(int a,int b,int c) {
    
    if (a>b && a>c) {
    printf("The first person is Eldest:\n"); }
    
    else if ( b>c  && b>a){
    printf ("the second person is Eldest: \n");
    }
    else if (c>b  && c>a) {
        printf("the third person is Eldest:\n ");
    }
}