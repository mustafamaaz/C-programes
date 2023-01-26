#include <stdio.h>

int main()
{

    char str[100],text[100];
    int i=0,j=0;
    printf("\nEnter any Sentence :: ");
    gets(str);

//Character reversing starts
        while(str[i]!='\0')
                i++;
        while(i>0)
    {

                text[j]=str[--i];
                ++j;

        }
        text[j]='\0';
//Character reversing ends
        printf("\nReversed Sentence :: ");

    for(i=0;text[i]!='\0';i++)
    {

       if(text[i+1]==' ' || text[i+1]==NULL)
       {

           for(j=i;j>=0 && text[j]!=' ';j--)
                        printf("%c",text[j]);

                printf(" ");
        }


    }

    return 0;
}