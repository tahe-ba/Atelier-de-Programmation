#include <stdio.h>

#include <stdlib.h>
//toujours definir pas aves un entier qui est multiple de 10 selon le besoin
#define pas 10

//fonction qui enregistre l entier aleatoire dans un fichier
void fill_random(char * p, int l);

//cette fonction sert a enregistré {pas definie} entier d'un fichier a partir de la nieme ligne dans un tableau 
void extract(char * str, int t[pas], int * pp);

//fonction qui enregistre le contenue d'un tableau dans un fichier texte
void tab_text(int t[pas], char * out);

//fonction qui fusionne un tableau trié avec un fichier texte qui contient des entiers trié 
//et enregistre au fur et au mesure dans le meme fichier texte
void tri_tab_fiche(int t[pas], FILE * fo);

//fonction qui retourne combien d'entier dans un fichier texte
int line_number(char * p);

//Fonction arbitraire sert a comparé deux element de tableau lors de lappel dans qsort pour trié un tableau
int cmpfunc(const void * a,
    const void * b);

void main() {
    int * tab;
    int pos = 0;
    int i, n, k = 0;
    char str[pas];
    FILE * out;
    tab = (int * ) malloc(pas * sizeof(int));

    printf("Enter file name .txt : ");
    scanf("%s", str);
    do {
        printf("Combien de numero aleaoire voulez vous enregistre dans ce fichier (multiple de 10 et >=10) : ");
        scanf("%d", & n);
    } while ((n % pas != 0) || (n <= 0));
    fill_random(str, n); // remplir le fichier texte avec n entier aleatoire 
    extract(str, tab, & pos); //remplir tab avec les pas premiers entier
    tab_text(tab, "output.txt"); //enregistré le contenu de tab dans un fichier (**)
    while (pos < n || (pos < pas)) {
        extract(str, tab, & pos); //remplir tab avec les pas entier a partir de pos
        tri_tab_fiche(tab, out); //fusionner tab avec le fichier (**)
    }
    printf("\nTri du fichier %s fait avec succes, resultat enregistree dans output.txt\n",str);
}

int cmpfunc(const void * a,
    const void * b) {
    return ( * (int * ) a - * (int * ) b);
}

void extract(char * str, int t[pas], int * pp) {
    int i, x = 0, j;
    int temp;
    FILE * finp = fopen(str, "r");
    //ce boucle for sert a pousser le pointeur jusqua la position souhaité pp
    for (j = 0; j < * pp; j++) {
        fscanf(finp, "%d", & temp);
    }
    do {
        for (i = 0; i < pas; i++) {
            fscanf(finp, "%d", & t[i]);
        }
        //qsort fonction prédefinie dans stdlib.h sert a trié un tableau
        qsort(t, pas, sizeof(int), cmpfunc);
        x++;
    } while ((!feof(finp)) && x > pas);
    fclose(finp);
    // on incremente le pp en retour par passage pa r adress pour savoire combien de pas on a fait
    * pp += pas;
}

void tab_text(int t[pas], char * out) {
    int i;
    FILE * fout = fopen(out, "w+");
    for (i = 0; i < pas; i++) {
        fprintf(fout, "%d\n", t[i]);
    }
    fclose(fout);
}

int line_number(char * p) {
    FILE * f;
    int tmp, i = 0;
    f = fopen(p, "r");
    while (fscanf(f, "%d", & tmp) == 1) {
        i++;
    }
    return i;
    fclose(f);
}

void tri_tab_fiche(int t[pas], FILE * fo) {
    FILE * fi = fopen("output.txt", "r");
    FILE * tt = fopen("temp.txt", "wr+");
    int i, j, num, k, aux, r;
    i = j = k = 0;
    num = line_number("output.txt");
    //copier le contenue de output.txt dans temp.txt
    while (fscanf(fi, "%d", & aux) == 1) {
        fprintf(tt, "%d\n", aux);
    }
    fclose(fi);
    fo = fopen("output.txt", "wr+"); // output.txt ouvert pour ecriture et ecrase l'ancien
    rewind(fo);
    rewind(tt);
    while ((fscanf(tt, "%d", & r) == 1)) { // r entier extrait de temp.txt
        while (i < pas && j < num) { //verifier quoi ecrire dans output.txt ? t[i] oubien r
            if (t[i] < r) {
                fprintf(fo, "%d\n", t[i]);
                i++;
            } else {
                fprintf(fo, "%d\n", r);
                j++;
                break;
            }
            k++;
        }
        if (i >= pas) {
            while (j < num) {
                fprintf(fo, "%d\n", r);
                j++;
                k++;
                break;
            }
        }
        if (j >= num) {
            while (i < pas) {
                fprintf(fo, "%d\n", t[i]);
                i++;
                k++;
            }
        }
    }
    fclose(fo);
    fclose(tt);
    remove("temp.txt");
}

void fill_random(char * p, int l) {
    int i;
    FILE * f = fopen(p, "w+");
    for (i = 0; i < l; i++) {
        //toute les condition sont mises afin de reduire les redondances des numero aleatoire
        if (l <= 10) {
            fprintf(f, "%d\n", rand() % 10 + 1);
        } else if (l <= 100) {
            fprintf(f, "%d\n", rand() % 100 + 1);
        } else if (l <= 1000) {
            fprintf(f, "%d\n", rand() % 1000 + 1);
        } else if (l <= 10000){
            fprintf(f, "%d\n", rand() % 10000 + 1);
        } else {
            fprintf(f, "%d\n", rand() % 100000 + 1);
        }
    }
    fclose(f);
}