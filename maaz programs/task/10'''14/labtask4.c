#include <stdio.h>
 int a[10][10];
 int b[10][10];
 int resultant[10][10];
 
 
int copy(int r[][10],int row,int col){
    int rows=row;
    int cols=col;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",r[i][j]);
            
        } printf("\n");}}


int main() {
    
      int arow,acol,brow,bcol,sum=0;
printf("Enter the row and coloum of matrix a in formate (m n):");
                     scanf("%d %d",&arow,&acol);

      for(int i=0;i<arow;i++){
      for(int j=0;j<acol;j++){
printf("Enter the element of matrix a of index:%d%d is ",i,j);
                    scanf("%d",&a[i][j]);
    }}

printf("\n");
printf("\nEnter the row and coloum of matrix b in formate (m n):");
                  scanf("%d %d",&brow,&bcol);

if(acol!=brow)
printf("Multiplication of given matrixs is not possible \n");
else{
    
    for(int i=0;i<brow;i++){
    for(int j=0;j<bcol;j++){
    printf("Enter the element of matrix b of index:%d%d is ",i,j);
    scanf("%d",&b[i][j]);
    }}

        for(int i=0;i<arow ;i++){
        for(int j=0;j<bcol ;j++){
        for(int k=0;k<brow ;k++){
                sum+=a[i][k]*b[k][j];}
                resultant[i][j]=sum;
                sum=0;
        }}
    printf("\n");
    printf("Matrix a is\n");
    copy(a,arow,acol);
    printf("Matrix b is\n");
    copy(b,brow,bcol);
    printf("Resultant Matrix is\n");
    copy(resultant,arow,bcol);
}
    return 0;
}