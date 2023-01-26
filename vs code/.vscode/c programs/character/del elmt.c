#include <stdio.h>

int main() {
    int position;
    int  a[4];
    
    for(int i=0;i<4;i++){
        printf("Enter the %d element of arry ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("Enter the position of which you want delete element\n");
    scanf("%d",&position);
    for(int i=position-1;i<4;i++){
        a[i]=a[i+1];
    }
    for(int j=0;j<3;j++)
    printf("%d ",a[j]);
}
   