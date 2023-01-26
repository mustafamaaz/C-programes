#include<stdio.h>

int main(){
    int row,col;
    printf("Enter the row of aryy\n");
    scanf("%d",&row);
    printf("Enter the col of aryy\n");
    scanf("%d",&col);
int matrix[row][col];
for (int i = 0; i < row; i++){
    for (int j = 0; j < col; j++){
        printf("Enter the elemt at index: %d%d\n",i,j);
        scanf("%d",&matrix[i][j]);
    }}

printf("\nEntered matric is :\n");

    for (int i = 0; i<row; i++){
    for (int j = 0; j<col; j++){
        printf(" %d ",matrix[i][j]);
        
    }  printf("\n");
    }
printf("\n\n");
       for(int k=0;k<1;k++){
     for (int i = 0; i<row; i++){
    for (int j = 0; j<col; j++){
        if(i==1 && j==1){
          printf(" ");
        }
        else {
        printf(" %d ",matrix[i][j]);}
        
    }  printf("\n");
    }

}




    return 0;
}