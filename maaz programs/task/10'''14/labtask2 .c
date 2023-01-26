#include <stdio.h>

int main() {
    int dim,sum=0,sum1=0;
    printf("Enter the dimenssion of square matrix: ");
    scanf("%d",&dim);
    int m=dim;
    int a[dim][dim];
    
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
    printf("Enter value for index %d%d: ",i,j);
    scanf("%d",&a[i][j]);
        }
        printf("\n\n");
    }
    
     printf("\nOriginal matrix is\n");
    
    for(int i=0;i<dim;i++){
         m=m-1;
        for(int j=0;j<dim;j++){
            
    printf("%d ",a[i][j]);
    
    if(i==j){
    sum=sum+a[i][j];}
    
    if(m==j){
    sum1=sum1+a[i][j];
    
    } }
        printf("\n");
    }
    
    printf("sum of left diagonal is:%d\n\n",sum);
     printf("sum of right diagonal is:%d\n",sum1);
    

    return 0;
}