#include <stdio.h>
int main()
 {
	int row, i;

	printf("Input number of elements in a line : \n");
	scanf("%d", &row);

	for(i = 1; i <= 50; i++)
    {
		printf("%.2d	",i);
	 if (i % row == 0)
		{
			printf ("\n");
		} 
	}
	
	return 0;
}