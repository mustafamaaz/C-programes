#include <stdio.h>
#include <string.h>

int counting(char A[], int length)
{
    int find;

    for (int i = 0; A[i] != '\0'; i++)
    {
        int count = 0;
        for (int j =i; A[j] != '\0'; j++)
        {
            if(A[i]!=' '){
            if (A[i] == A[j])
            {
                find = j; // if we take find =j then second occurance is print
                count++;

                if (count >= 2)
                {
                    return find;
                }
            }
            }
            else 
            continue;
        }

    }
}

int main()
{
    char str[100];
    printf("Enter the string\n");
    gets(str);
    int z = strlen(str);
    int a = counting(str, z);
    if (a == 0)
    {
        printf("no occurance\n");
    }
    else
    {
        printf(" %c", str[a]);
    }
    return 0;
}