#include<stdio.h>
int main() {
    int row;
    printf("Enter the row no\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++)
        printf("* ");
        for (int k=1;k<=row-i;k++)
        printf(" ");
        printf("\n");
        
    }
    int two=row-1;
    for(int i=1;i<=two;i++){
        for(int j=two;j>=i;j--)
        printf("* ");
       
        printf("\n");
        
    }
    
    
  
	return 0;
}