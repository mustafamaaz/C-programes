#include <stdio.h>

int monthly_exp (int loan_payment,int insurance,int gas,int oil,int tires,int maintenance) ;

int yearly_exp (int loan_payment,int insurance,int gas,int oil, int tires,int maintenance);

int main() 
{
  int loan_payment=1;
  int insurance=2;
  int gas=2;
  int oil=2;
  int tires=2;
  int maintenance=2;
  
  int result_1 = yearly_exp (loan_payment, insurance, gas, oil, tires,maintenance);
  
  printf("Yearly expenses is :%d\n",result_1);
    
    return 0;
}

    int monthly_exp (int loan_payment,int insurance,int gas,int oil, int tires,int maintenance) 
{ 
int cal_1=loan_payment+insurance+gas+oil+tires+maintenance;
    return cal_1;
}

    int yearly_exp (int loan_payment,int insurance,int gas,int oil, int tires,int maintenance)
{
    
    int result_1 = monthly_exp ( loan_payment, insurance, gas, oil, tires,maintenance);
    printf("Montly enpenses is :%d\n",result_1);
    int result_2=result_1*12;
    return result_2;
   
}