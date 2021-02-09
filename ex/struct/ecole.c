#include <stdio.h>

  typedef struct {
        int first;
        int last;
        float MG;
    }student;

void main() {
    student list[20];
    int i;
    printf ("student list input\n");
    for (i=0;i<=5;i++){
        printf("first name of student %d",i+1);
        scanf("%s",list[i].first);
        printf("last name of student %d",i+1);
        scanf("%s",list[i].last);
        do{
            printf("moy of student %d",i+1);
            scanf("%f",&list[i].MG);
        }while (!((list[i].MG>=0)&&(list[i].MG<=20)));
    }


}