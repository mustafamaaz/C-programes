#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int even=0;
    int odd=1;
    int row=3;
    int elem,num;
   printf("How many elements in each sequence ?\n");
   scanf("%d",&elem);
    printf("Enter the number\n");
    scanf("%d",&num);


   int matrix[3][elem];

    for (int i = 0; i <1; i++){
    for (int j = 0; j < elem; j++){
           matrix[i][j]=j+1;
       }}

    for (int i = 1; i <2; i++){
    for (int j = 0; j < elem; j++){
           matrix[i][j]=even;
           even=even+2;
       }}

       for (int i = 2; i <3; i++){
    for (int j = 0; j < elem; j++){
           matrix[i][j]=odd;
           odd=odd+2;
       }}

for (int i = 0; i <3; i++){
for (int j = 0; j <elem; j++)
    printf("%d ",matrix[i][j]);      
    printf("\n");
}


 printf("From natural number series \n");
 for(int k=0;k<1;k++){
for (int i = 0; i <elem; i++){
for (int j = i+1; j <elem; j++){

 if ( matrix[k][i] + matrix[k][j]== num)
 {
  printf("%d + %d = %d\n",matrix[k][i],matrix[k][j],num);
 }}}}

    printf("From even number series \n");
for(int k=1;k<2;k++){
for (int i = 0; i <elem; i++){
for (int j = i+1; j <elem; j++){
 if ( matrix[k][i] + matrix[k][j]== num){
  printf("%d + %d = %d\n",matrix[k][i],matrix[k][j],num);
 }}}}

printf("From odd number series \n");

for(int k=2;k<3;k++){
for (int i = 0; i <elem; i++){
for (int j = i+1; j <elem; j++){
 if ( matrix[k][i] + matrix[k][j]== num)
 {
  printf("%d + %d = %d\n",matrix[k][i],matrix[k][j],num);
 }}}}

    return 0;
}