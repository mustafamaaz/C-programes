#include <stdio.h>

int main() {
    int result,count=0;
    int marks[10];
    int length=sizeof(marks)/sizeof(marks[0]);
printf("Enter the marks of 10 students\n");
for(int i=0;i<length;i++){
scanf("%d",&marks[i]);
}
int max=0,min=marks[0];
float sum=0;
for(int j=0;j<length;j++){
    if(max>marks[j]){
        max=max;
    }
    else if(max<marks[j]){
        max=marks[j];
    }
    
    if(min<marks[j]){
        min=min;
    }
    else if(min>marks[j])
          min=marks[j];
    
    }
    for(int j=0;j<length;j++){
        sum=sum+marks[j];
    }
    float average=sum/length;
    for(int k=0;k<length;k++){
        count=count+1;
        printf("marks of %d student %d\n",count,marks[k]);
    }
    
printf("maximum marks is :%d\nminimum marks is:%d\nsum is %.3f",max,min,average);

    return 0;
    }