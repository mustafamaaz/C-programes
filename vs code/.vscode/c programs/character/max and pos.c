// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int pos;
    int a[]={1,2,3,10,9,2,3,6,8};
    
    for(int i=0;i<2;i++){
        int test=a[0];
    for(int j=0;j<9;j++){
            if(test<a[j]){
            test=a[j];
            pos=j;
            }
    }
    printf("%d     %d\n",test,pos);
    a[pos]=0;
}
    return 0;
}