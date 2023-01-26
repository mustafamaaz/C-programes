#include<stdio.h>
#include<stdbool.h>
int dim;
int checkmatrix(int a[][dim],int cols){
int num=0;
int count=0;
     for (int i = 0; i < cols; i++){
     for (int j = 0; j < cols; j++){

     if (i>j){
      if(a[i][j] == 0){
             count++;   }
             num++;
             }



}}

 printf("\n");

if(count==num)
printf("\nuper triangle\n");
else
printf("\nnot uper triangle\n");


}


int main(){
    
printf("Enter the dimension of the square Matrix\n");
scanf("%d",&dim);
int row=dim;
int col=dim;
int matrix[row][col];

for (int i = 0; i < row; i++){
     for (int j = 0; j < col; j++){
printf("Enter the value at index:%d%d :",i,j);
scanf("%d",&matrix[i][j]);
}}

printf("\n The entered matrix is : \n");

for (int i = 0; i < row; i++){
     for (int j = 0; j < col; j++){
printf("%d ",matrix[i][j]);

} printf("\n");
}
        int z=   checkmatrix(matrix,row);

    return 0;
}