// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int count,z=0,space=0;
 int a[4]={4,3,2,4};
 int dub[4];
 for(int i=0;i<4;i++){
     count=0;
     for(int j=0;j<4;j++){
         if (a[i]==a[j]){
             count++;
         }
 }
 if(count>1){
 dub[i-space]=a[i];
 z++; 
 }
 else
 space++;
 }
 for(int i=0;i<z;i++)
 printf("Number is arrange with out space\n%d\n ",dub[i]);

    return 0;
}