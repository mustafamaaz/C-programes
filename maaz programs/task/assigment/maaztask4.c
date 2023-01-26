	#include<stdio.h>
int main(){
	int  box=22,container=55,ck,remain;
	float noofbox,contain,maaz;
	printf("enter the quntity of chocklates\n");
	scanf("%d",&ck);
	noofbox=ck/box;
	printf("%d chocklates  fit in %.2f boxes\n",ck,noofbox);
	remain = ck%box;
		if(remain!=0)
	printf("Remaining number of chocklates are: %d\n", remain);
	contain=noofbox/container;
		printf("%.2f boxes will be fitted in %f container\n",noofbox,contain);
		maaz = (int)noofbox%container;
		if (maaz!=0)
		printf("remaining boxes that cant't store in container are %.2f",maaz);
		
}