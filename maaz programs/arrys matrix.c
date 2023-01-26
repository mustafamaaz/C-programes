#include <stdio.h>

int main() {
    int sum=0,sum1=0,count,count1;
    int a[5][5]={ 
                {8,3,9,0,10},
                {3,5,17,1,1},
                {2,8,6,23,1},
                {15,7,3,2,9},
                {6,14,2,6,0} };
    for(int i=0;i<5;i++) {
    for(int j=0;j<5;j++) {
         sum=sum+a[j][i];
         
    } 
    count=count+1;
     printf("product of  coloum %d is %d\n",count,sum);
     sum=0; 
    }               
    for(int i=0;i<5;i++) {
    for(int j=0;j<5;j++) {
         sum=sum+a[i][j];
    } 
    count1=count1+1;
     printf("product of row %d is %d\n",count1,sum);
     sum=0; 
    }                     
    for(int j=0;j<5;j++) {
    for(int i=0;i<5;i++) {
        sum1=sum1 +a[i][j];
    }
    printf("product of individual coloum %d\n",sum1);
     sum1=0;
    }
    return 0;
}
       // uper ham ny sirf order change kiye thy issy row or coloum dono ban rhy thy wrna ulternate method bh kiya hy 
      // check kro uper  