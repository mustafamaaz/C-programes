#include<stdio.h>
int main() {
    int n;
    char ch;
printf("Enter the character\n");
scanf("%s",&ch);
printf("How many rows\n");
scanf("%d",&n);
for( int row=1;row<=n;row++) {
    for (int space=n;space>=row;space--) {
        printf("%c ",ch); }
    
    printf("\n");
    }
	return 0;
}