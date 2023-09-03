#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    struct student
    {
        int number;
        char name[20], dep[20];
    };
    struct list_student
    {
        int number;
        char name[20], dep[20];
        struct list_student *next;
    };
    typedef struct student std;
    typedef struct list_student l_std;
    FILE *p;
    l_std *pl, *head;
    std student;
    head=(l_std*)malloc(sizeof(l_std));
    pl=head;
    p=fopen("dosya","r");
    while(!feof(p))
    {
        fread(&student,sizeof(std),1,p);
        pl->next=(l_std*)malloc(sizeof(l_std));
        pl=pl->next;
        pl->number=student.number;
        strcpy(pl->name,student.name);
        strcpy(pl->dep,student.dep);
    }
    pl->next=NULL;
    pl=head->next;
    while(pl!=NULL)
    {
        printf("\n%d %s %s",pl->number, pl->name, pl->dep);
        pl=pl->next;
    }
    fclose(p);
    return 0;
}
