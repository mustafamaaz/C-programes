
#include<stdio.h>
int main() {
int row,space,n,star;
printf("How many rows\n");
scanf("%d",&n);
for( row=1;row<=n;row++) {
    for (space=n;space>=row;space--) {
        printf("%d ",space); }
    
    printf("\n");
    }
	return 0;
}