#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int main()
{
    char person[] = {"maaz"};
    char pass[] = {"2107"};
     FILE *ptr = NULL;
     FILE *ptr1 = NULL;
    
    int opt,ineropt,year,candidate,population;
    int namecmp, passcmp;
    char str1[10] = {0};
    char str2[10] = {0};

    do
    {

        printf("\n\n\t\t\t\t1).Student Panel\n\t\t\t\t2).Admin Panel\n\t\t\t\t3).Exist\n\t\t\t\tChoose Option");
        scanf("%d", &opt);

        if (opt == 2)
        {
            printf("Enter username: ");
            scanf("%s", str1);

            if (strcmp(str1, person) == 0)
            {
                printf("Enter password: ");
                scanf("%s", str2);
            }
            else
                printf("Wrong username and password");

            if (strcmp(str1, person) == 0 && strcmp(str2, pass) == 0)
            {
                printf("\nLOGGIN SUCESSFULLY\n");

                 do{
                printf("\n\n\t\t\t1).New elction\n\t\t\t2).Delete illegal vote\n\t\t\t3).Ban user id\n\t\t\t4).result\n\t\t\t5).logout ");
                scanf("%d",&ineropt);

                if(ineropt==1){
                    printf("New election initiation...\n");
                    printf("election for which year: ");
                    scanf("%d",&year);
                    printf("Enter population: ");
                    scanf("%d",&population);
                    printf("Enter number of candidate: ");
                    scanf("%d",&candidate);
                    char candidatename[candidate][20];

                    for(int i=0;i<candidate;i++){
                    printf("Enter name of candidate %d ",i+1);
                    scanf("%s",candidatename[i]);
                    }

                    printf("Saving election info in file...\n");
                    printf("Saved sucessfuly : )\n");

                    ptr=fopen("Name_of_candidates.txt","a");

                     for(int j=0;j<candidate;j++){

                     fprintf(ptr,"Name [%d] = [%s]",j+1,candidatename[j]);
                     fprintf(ptr,"\n");

                    }  fclose(ptr);
                }
                else if ( ineropt==5)
                        break;
                

                 }while(true);
            }
        }
        else if(opt == 1){
            char cnic[population][13];

            ptr1=fopen("Id_people.txt","a");

            for(int i=0;i<population;i++){

                printf("TO EXIT PRESS 1\n:");
                printf("Enter user ID:");
                scanf("%s",cnic[i]);

                if(cnic[i][i]!="1"){
                if(strlen(cnic)==13){

                 fprintf(ptr1,"ID  = [%s]",cnic[i]);
                 fprintf(ptr1,"\n");

                    }
                    else
                    printf("INVALID USER ID\n");

                }
                else
                break;

               

            }
             for(int j=0;j<population;j++){
                    printf("%s",cnic[j]);
                }





        }

    } while (true);


    

    return 0;
}