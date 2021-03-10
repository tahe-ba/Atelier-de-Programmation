#include <stdio.h>
# define N 3

typedef struct {
    int age;
    char nom[30];
    char prenom[30];
}pers;

void remplir_bin_n(FILE *fi,int n) {
    pers p;
    int i;
        for (i=0;i<n;i++){
            printf("veillez entrez les information du personne n° %d\n", i + 1);
                printf("\tAge: ");
                scanf("%d", & p.age);
                printf("\tNom: ");
                while ((getchar()) != '\n');
                scanf("%[^\n]", p.nom);
                printf("\tPrenom: ");
                while ((getchar()) != '\n');
                scanf("%[^\n]", p.prenom);
            fwrite(&p,1,sizeof(pers),fi);
        }
    fclose(fi);
}

void afficher_file_bin(FILE *f){
    pers pi;
    int i=1;
    fread(&pi,1,sizeof(pers),f);
    while(!feof(f)){
        printf("Information du personne n° %d\n", i );
        printf("\tL'age est : %d\n",pi.age);
        printf("\tLe nom est : %s\n",pi.nom);
        printf("\tLe prenom est : %s\n",pi.prenom);
        fread(&pi,1,sizeof(pers),f);
        i++;
    }
    fclose(f);
}
void main (){
    FILE *f,*fi;
    f=fopen("pers.dat","rb");
    fi=fopen("pers.dat","wb");

    remplir_bin_n(fi,N);
    afficher_file_bin(f);
}