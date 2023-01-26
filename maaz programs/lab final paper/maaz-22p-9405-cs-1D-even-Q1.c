#include<stdio.h>

int main(){
   int price_fix_project[100];
   int work_horly_prjt[100];
int amt_fix_prjt,prc_fix_prjt,hourly_rate,amt_work_prjt;
int amt_horly_prjt;
int totalfixedproject=0,sum=0;

printf("Enter Number of fixed priced project from the user\n");
scanf("%d",&amt_fix_prjt);

if(amt_fix_prjt>0){
    for(int i=1;i<=amt_fix_prjt;i++){
        printf("Enter the price of project %d in dollars\n",i);
        scanf("%d",&price_fix_project[i-1]);
    }}

printf("Enter your hourly rate in dollar \n");
scanf("%d",&hourly_rate);

printf("Enter number of hourly project \n");
scanf("%d",&amt_horly_prjt);

if(amt_horly_prjt>0){
    for(int j=1;j<=amt_horly_prjt;j++){
       printf("Enter the number of hours worked on project %d\n",j);
        scanf("%d",&work_horly_prjt[j-1]);
    }}

for(int i=1;i<=amt_fix_prjt;i++){
 totalfixedproject=totalfixedproject+price_fix_project[i-1];

}
printf("\nIncome earned from fixed priced project: is %d$\n",totalfixedproject);

for(int i=1;i<=amt_horly_prjt;i++){
    sum=sum+work_horly_prjt[i-1];
}
int totalhourlyproject=sum*hourly_rate;
printf("\nIncome earned from hourly project: is %d$\n",totalhourlyproject);
printf("\nTotal income earned till no: is %d$\n",totalhourlyproject+totalfixedproject);


    return 0;
}