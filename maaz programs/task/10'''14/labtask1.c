#include <stdio.h>
int row,col;
int print(int a[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int trans(int b[row][col]){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
           printf("%d ",b[j][i]);
        }
        printf("\n");
}
}




int main() {
    
    printf("how many rows\n");
    scanf("%d",&row);
printf("how many cols\n");
scanf("%d",&col);
int matrix[row][col];

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
printf("Enter the value for index %d%d  ",i,j);
scanf("%d",&matrix[i][j]);
    }
}
printf("Original matrix is \n");
print(matrix);
printf("Transpose  matrix is \n");
trans(matrix);






    return 0;
}