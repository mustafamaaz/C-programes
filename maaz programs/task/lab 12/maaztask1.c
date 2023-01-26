
#include<stdio.h>


int main(){
    int n,sum=0;
printf("Enter the number\n");
scanf("%d",&n);
for(int j=1;j<=n;j++) {
    int  fact=1;
for( int i=1;i<=j;i++){
   
    fact=fact*i;
   
}
 printf("the factorial of %d is %d\n",j,fact);
 sum=sum+fact;
 
}
printf("The sum is %d",sum);
	return 0;
}