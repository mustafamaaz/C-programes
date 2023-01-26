#include <stdio.h>

int main() {
  int n,row,space,star;
printf("Enter the row number\n ");
scanf("%d",&n);
for(row=1;row<=n;row++) {
    for(space=1;space<=(n-row);space++) 
        printf("   ");
        for(star=1;star<=((2*row)-1);star++){
            int con=(2*row)-1;
            if(star>1 && star<con){
                 printf("   ");    
                 continue;               
            }
            printf(" * ");
        }
           
            printf("\n");
}

for(row=n-1;row>=1;row--) {
    for(space=1;space<=(n-row);space++) 
        printf("   ");
        for(star=1;star<=((2*row)-1);star++){
              
              int con=(2*row)-1;
            if(star>1 && star<con){
                 printf("   ");    
                 continue;               
            }
            printf(" * ");
            }
            printf("\n");
}



    return 0;
}