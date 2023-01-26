#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int row[3];
    int col[3];
    int leftdiagonal;
    int rightdiagonal;
    int sumrow=0;
    int sumcol=0;
    int sumdiagonal=0;
    int sumrightiagonal=0;
    int m=3;
    int countrow=0,countcol=0,countcmp=0;
    int matrix[3][3]={{2,7,6},
                      {9,5,1},
                      {4,3,8}};

     for (int i = 0; i < 3; i++){
        m=m-1;
      for (int j = 0; j < 3; j++){
       sumrow=sumrow+matrix[i][j];
       sumcol=sumcol+matrix[j][i];
       if (i==j) 
        sumdiagonal=sumdiagonal+matrix[i][j];
        if (m==j)
            sumrightiagonal=sumrightiagonal+matrix[i][j];}
      row[i]=sumrow;
      col[i]=sumcol;
      sumrow=0;
      sumcol=0;
      }
      leftdiagonal=sumdiagonal;
      rightdiagonal= sumrightiagonal;

       // printing
     for (int i = 0; i < 3; i++)
     printf("%d ",row[i]);
     
     printf("\n\n");
     for (int i = 0; i < 3; i++)
     printf("%d ",col[i]);
     
     printf("\n\n");
     printf("%d",leftdiagonal);
     printf("\n\n");
     printf("%d\n",rightdiagonal);
        // compare all elemnt of row and coloum
     for(int i=0;i<1;i++){
     for (int j=i+1; j<3; j++){
     if (row[i]==row[j])
        countrow++;
        if (col[i]==col[j])
            countcol++;
     }}
     for (int k = 0; k < 3; k++){
        if (row[k]==col[k])
            countcmp++;}
     
     if(countcol==2 && countrow==2 && countcmp==3){
        if (leftdiagonal == rightdiagonal)
            printf("\nMatrix is magic\n");
     }
     else
     printf("Matrix is not magic");
                      


    return 0;
}