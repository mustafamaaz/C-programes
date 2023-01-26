#include<stdio.h>
 a=3600;
 b=60;
 c=1000;
int main() {
    float hour,distance,mint,hour1,distance1,mint1,sec,sec1;
    float total_sec,total_sec1,sec2,sec3,meter,meter1;
    float speed,speed1;
   printf("Enter the distance of Ali in KM\n In which hour and second\n");
   scanf("%f,%f,%f",&distance,&hour,&mint);
  printf("Enter the distance of Haider in KM\nIn which hour and second\n");
   scanf("%f,%f,%f",&distance1,&hour1,&mint1);
   //convert ali distance and hour and mint into sec and meter
   sec=a*hour; sec1=b*mint;total_sec=sec+sec1;
   meter=c*distance;
   //convert haider distance and hour and mint into sec and meter
    sec2=a*hour1; sec3=b*mint1; total_sec1=sec2+sec3;
      meter1=c*distance1;
      // formula
    speed=meter/total_sec; speed1=meter1/total_sec1;
    printf("speed of Ali is :%.3f'm/s'\n",speed);
     printf("speed of Haider is :%.3f'm/s'\n",speed1);
    return 0;
}