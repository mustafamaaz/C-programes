#include<stdio.h>
int factorial(int number)
{
	if (number ==1 || number == 0)           //base case sirf wo condition likhni hy jis sy recursion stop hojaey
	{
		return 1;
	}
	else
	{
		return number*factorial(number-1);	//Recursion of Function case
	}
}

int main()
{
	int num;
	printf("Enter a no. :");
	scanf(%d, &num);
	printf("\nThe factorial of %d is %d", num, factorial(num));

	return 0;
}