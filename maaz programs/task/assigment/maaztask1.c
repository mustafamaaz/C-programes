#include <stdio.h>

int main() {
    int row,z=1,x=65;
     
    printf("How many row :?");
    scanf("%d",&row);
    printf("pattern 1\n");
for(int i=1;i<=row;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",z);
        z++;
    }
    printf("\n");
}
printf("\n");
printf("Pattern 2\n");
   for(int i=1;i<=row;i++){
       int b=1,a=0;
    for(int j=1;j<=i;j++){
      
  
   int sum=a+b;
   printf("%d ",a);
     a=b;
     b=sum;
     
    }
    printf("\n");
}
printf("\n\n");
printf("Pattern 3 \n");
for(int i=1;i<=row;i++){
    for(int j=1;j<=i;j++){
     printf("%c ",x);}
     x++;
     printf("\n");
}
    return 0;
}