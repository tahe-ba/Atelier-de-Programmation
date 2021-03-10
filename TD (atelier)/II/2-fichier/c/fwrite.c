#include <stdio.h>

typedef struct {
    int age;
    char nom[30];
    char prenom[30];
}pers;

void remplir_personne(pers * f) {
    char full[10];
    printf("\tAge: ");
    scanf("%d", & f -> age);
    printf("\tNom: ");
    while ((getchar()) != '\n');
    scanf("%[^\n]", f -> nom);
    printf("\tPrenom: ");
    while ((getchar()) != '\n');
    scanf("%[^\n]", f -> prenom);
}

void main (){
    FILE *fi,*f,*ft;
    pers p,pi;
remplir_personne(&p);
fi=fopen("pers.dat","wb");
fwrite(&p,3,sizeof(pers),fi);
fclose(fi);
f=fopen("pers.dat","rb");
fread(&pi,3,sizeof(pers),f);
printf("age: %d\n",pi.age);
printf("nom: %s\n",pi.nom);
printf("prenom: %s\n",pi.prenom);
fclose(f);



}