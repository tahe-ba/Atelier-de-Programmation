#include<stdio.h>
typedef struct
    {
        char nom[21];
        char prenom[21];
        int age;
    }personne;
void main()
{
    personne p;
    FILE * f;

    /*f=fopen("pers.dat","wb)
    for(i=1;i<=10;i++)
    {
        printf("Saisir les données de la personne %d\n",i);
        printf("Saisir le nom : ");
        scanf("%s",p.nom);
        printf("Saisir le prénom : ");
        scanf("%s",p.prenom);
        printf("Saisir l age : ");
        scanf("%d",&p.age);
        fwrite(&p,sizeof(personne),1,f);
    }
    fclose(f);*/

    /*f=fopen("pers.dat","rb");
    fread(&p,sizeof(personne),1,f);
    while(!feof(f))
    {
        printf("(%s, %s, %d)\n",p.nom,p.prenom,p.age);
        fread(&p,sizeof(personne),1,f);
    }
    fclose(f);*/

    personne Liste[10];
    f=fopen("pers.dat","rb");
    fread(Liste,sizeof(personne),10,f);
    fclose(f);
    for(i=0;i<=9;i++)
    {printf("(%s,%s,%d)\n",Liste[i].nom,Liste[i].prenom,Liste[i].age);}
}
