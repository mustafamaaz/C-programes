#include<stdio.h>
#include<math.h>
#include<string.h>
int vowelcheck(char a[],int length){ // count vowel
int count=0;
for (int i = 0;a[i]!='\0'; i++)
{
    if (a[i]=='a' || a[i]=='e'||a[i]=='i' ||a[i]=='o'||a[i]=='u')
        count++;
}
return count;

}

int countvowel(char b[],int length2){   // frequency
   int a =0,e =0,i_1 =0,o =0,u = 0;
    for (int i = 0; b[i]!='\0'; i++)
    {
        if (b[i]=='a')
            a++;
         if (b[i]=='e')
            e++;
             if(b[i]=='i')
            i_1++;
             if(b[i]=='o')
            o++;
             if(b[i]=='u')
            u++;

    }
    printf("In this string [a] is [%d] times\n",a);
    printf("In this string [e] is [%d] times\n",e);
    printf("In this string [i] is [%d] times\n",i_1);
    printf("In this string [o] is [%d] times\n",o);
    printf("In this string [u] is [%d] times\n",u);
    
}

int main(){
    char str1[100];
printf("Enter the string\n");
gets(str1);
int length1=strlen(str1);
int result=vowelcheck(str1,length1);
printf("\n\nin this string [%s] [%d] alphabets are vowel\n\n",str1,result);
            countvowel(str1,length1);
    return 0;
}