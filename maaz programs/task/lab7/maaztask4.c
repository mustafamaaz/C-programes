 #include <stdio.h>
float dis;
float rate_1=0.0022,rate_2=0.0044,rate_3=0.0074,rate_4=0.0096;
float total_price,total_price_1,total_price_2,total_price_3;

void fun(float weight)
{
        if( weight>0 && weight<=20) {
 printf("Enter the distance to ship in mile:\n");
            scanf("%f", &dis);
            
        if(dis>=10 && dis<=3000) {
             
        if (weight <= 2) {
           total_price=dis *rate_1;
 printf("Thank you\nTotal charges:%.3f$",total_price);
                     }
        else if (weight>2 && weight <=6) {
           total_price_1=dis *rate_2;
 printf("Thank you\nTotal charges:%.3f$",total_price_1);
                                        }
        else if (weight>6 && weight <=10) {
           total_price_2=dis *rate_3;
 printf("Thank you\nTotal charges:%.3f$",total_price_2);
                                          }
        else if (weight>10 && weight <=20) {
           total_price_3=dis *rate_4;
 printf("Thank you\nTotal charges:%.3f$",total_price_3);
                                                }
         }
        else 
printf("sorry tcs does not deliver to such distance");
}
        else 
printf("sorry weight cannot be negative and, zero and greater then 20\n");

}

int main() {
    float weight;
printf("Enter the weight of the package in kg:\n");
        scanf("%f", &weight);
        fun(weight);
    return 0;
}