               2d arrys acess value 


#include <stdio.h>

int main() {
    int arry[2][3]={{1,2,3}, {4,5,6}};
    for (int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            printf("%d",arry[i][j]);
        }
    }
    return 0;
}                   

                         3d arrys acces value



#include <stdio.h>

int main() {
    int arry[2][2][3]={ {{1,2,3}, {4,5,6}},
                       {{7,8,9},{10,11,12}} };
    for (int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            for(int k=0;k<3;k++){
            printf("%d\n",arry[i][j][k]); }
        }
    }
    return 0;
}  