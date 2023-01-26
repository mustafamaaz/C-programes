#include <stdio.h>

int main() {
    
    int max,count,z,pos=1,test=0,pos1=0;
   
    int a[13]={20,3,7,3,1,2,15,5,17,2,3,12,6};
    int min=a[0];
   
        for(int j=0;j<13;j++){
            if(test<a[j]){
            test=a[j];
            pos=j;
            }
            
}
for(int i=0;i<13;i++){
    
             if(min>a[i]){
            min=a[i]; 
                pos1=i;
            }
}


printf("%d max at position %d\n\n",test,pos);
printf("%d min at position %d",min,pos1);
}