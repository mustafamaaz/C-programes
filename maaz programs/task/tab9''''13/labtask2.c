#include<stdio.h>
int main(){
	int a[10];
	int even=0;
	int odd=0;
		printf("Enter a number\n");
	for(int i=0;i<10;i++){
		scanf("\n %d",&a[i]);
	}
	for(int i=0;i<10;i++){
	
		if(a[i]%2==0){
			printf("\n %d is even ",a[i]);
			even++;
			
		}
		else{
			printf("\n %d is odd ",a[i]);
			odd++;
			
		}
		
	}
	printf("\nTotal even number is %d",even);
	printf("\nTotal odd number is %d",odd);
	return 0;
}

