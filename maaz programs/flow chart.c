#include <stdio.h>

int main() {
    int sum,CN;
    for(sum=0,CN=1;CN<=10;sum=sum+CN,CN=CN+1) {
        printf("%d %d\n",sum,CN);
    }

    return 0;
}