#include <stdio.h>
#include <math.h>
#include <string.h>
int vowelcheck(char a[], int length)
{ // count vowel
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int consonentcheck(char b[], int length_1)
{ // count consonent
    int count = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u')
        {
            if (b[i] != ' ')
            {
                count++;
            }
            else
                continue;
        }
    }
    return count;
}



int main()
{
    int result;
    char str1[100];
    char opt;
    printf("Enter the string\n");
    gets(str1);
   
   
    
    
   
     do{   
          printf("A) Count the number of vowels in the string\nB) Count both the vowels and consonants in the string\nC) Display the most frequent character in the string.\nD) Concatenate another string with the existing string.\nE) Exit the program\n.");
          scanf(" %c",&opt);
    int length1 = strlen(str1);
    if (opt == 'A')
    {
         result = vowelcheck(str1, length1);
        printf("\n\nin this string [%s] [%d] alphabets are vowel\n\n", str1, result);
    }
    else if (opt == 'B')
    {
        int result1 = consonentcheck(str1, length1);
        printf("\n\nin this string [%s] [%d] alphabets are consonent and [%d] alphabets are vowel\n\n", str1, result1,result);
    }
    else if (opt == 'C')
    {

        int a[1000], i, j, k = 0, count = 0, n;

        for (j = 0; str1[j]; j++)
            ;
        n = j;
        for (i = 0; i < n; i++)
        {
            a[i] = 0;
            count = 1;
            if (str1[i])
            {
                for (j = i + 1; j < n; j++)
                {
                    if (str1[i] == str1[j])
                    {
                        count++;
                        str1[j] = '\0';
                    }
                }
            }
            a[i] = count;
            if (count >= k)
                k = count;
        }
        printf("most frequent characters \n");
        for (j = 0; j < n; j++)
        {

            if (a[j] == k)
            {
                printf(" %c", str1[j]);
            }
        }

        printf(" is [%d]  times \n ", k);
    }
    else if(opt=='D'){

int count=0;
int length = strlen(str1);
char str2[100];
printf("Enter another string\n");
scanf("%s",str2);
    strcat(str1,str2);
printf(" combine string is [%s]",str1);

    }
    }while(opt=='A'||opt=='B'||opt=='C'||opt=='D');
    
    printf("\nYour are outside of loop\n");

    // countvowel(str1,length1);
    return 0;
}