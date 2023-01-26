#include <stdio.h>

int main() {
    char alp;
    //char z='a';
    printf("Enter the alphabets\n");
    scanf("%c",&alp);
    switch (alp) 
    {
        case ('a') :
        printf("Entered alphabet %c is vowel",alp);
        break;
        case ('e') :
        printf("Entered alphabet %c is vowel",alp);
        break;
        case ('i') :
        printf("Entered alphabet %c is vowel",alp);
        break;
        case ('o') :
        printf("Entered alphabet %c is vowel",alp);
        break;
        case ('u') :
        printf("Entered alphabet %c is vowel",alp);
        break;
        default:
        printf("Entered alphabets %c is consonents",alp);
        
        
    }
    return 0;
}