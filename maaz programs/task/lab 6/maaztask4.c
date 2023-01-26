
#include <stdio.h>
float x=100;
void calculateAttendance(int classesAttended, int classesTotal){
    float mark=classesAttended;
    float mark_1=classesTotal;
    float per= ( mark / mark_1 ) * x ;
    
    if (per<80) {
        printf("You are not allowed to sit in the exam");
    } else {
        printf("You are  allowed to sit in the exam");
    }
}
int main() {
    int maaz,maaz_1;
    printf("Enter the total number of classes\n");
    scanf("%d",&maaz);
printf("Enter the total number of classes that attended\n");
 scanf("%d",&maaz_1);
 calculateAttendance(maaz_1,maaz);
    return 0;
}