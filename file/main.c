#include <stdio.h>
#include <stdlib.h>

int main()
{ int rank ;
float salary;
char name[30];
    FILE* fptr;
    if ((fptr=fopen("pla.txt","w"))==NULL)
        {
            printf ("this file not found");
            exit(1);
        }

    fprintf(fptr,"rank\t  name\t  salary\t  \n");
  do
    {
    printf("enter your rank \n");
    scanf("%d",&rank);
    if (rank==0)break;
    printf("enter your name \n");
    fflush(stdin);
    gets(name);
    printf("enter your salary \n");
    scanf("%f",&salary);

    fprintf(fptr,"%-4d %-15s %-7f  \n",rank,name,salary);
    } while(1);

    fclose(fptr);
    return 0;
}
