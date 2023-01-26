#include<stdio.h>
int fact(int n)
{
	if (n ==1 || n == 0)          
		return 1;
	else
		return n*fact(n-1);	
}
int n_c_r(int n,int r)
{
    int temp=n-r;
    int result1 = fact(n);
	int result2=fact(r);
	int result3=fact(temp);
	return result1/ (result2*result3);
}


int main()
{
	int n,r;
	printf("Enter value of n. :");
	scanf("%d", &n);
	
	printf("Enter value of r :");
	scanf("%d", &r);
	int nCr=n_c_r(n,r);
	printf("The combination of value n : %d and value r: %d is %d",n,r,nCr);
	
	return 0;
}