#include <stdio.h>

#include <stdlib.h>

int cmpfunc(const void * a,
    const void * b) {
    return ( * (int * ) a - * (int * ) b);
}

void extract(FILE * finp, int t[10], int * pp) {
    int i, x = 0, j;
    int temp;
    finp = fopen("input.txt", "r");
    for (j = 0; j < * pp; j++) {
        fscanf(finp, "%d", & temp);
    }
    do {
        for (i = 0; i < 10; i++) {
            fscanf(finp, "%d", & t[i]);
        }
        qsort(t, 10, sizeof(int), cmpfunc);
        x++;
    } while ((!feof(finp)) && x > 10);
    fclose(finp);
    * pp += 10;
}
void tab_text(int t[10], char * out) {
    int i;
    FILE * fout = fopen(out, "a+");
    for (i = 0; i < 10; i++) {
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

}

void tri_tab_fiche(int t[10], FILE * fo) {
    FILE * fi = fopen("output.txt", "r");
    FILE * tt = fopen("temp.txt","wr+");
    int i , j,num, k,aux,r;
    i = j = k = 0;
    num = line_number("output.txt");
    while (fscanf(fi, "%d", &aux) == 1) {
        fprintf(tt,"%d\n",aux);
    }
    fclose(fi);
    fo = fopen("output.txt", "wr+");
    rewind(fo);
    rewind(tt);
    while ((fscanf(tt, "%d", &r) == 1)) {
        while (i < 10 && j < num) {
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
        if (i >= 10) {
            while (j < num) {
                fprintf(fo, "%d\n", r);
                j++;
                k++;
                break;
            }
        }
        if (j >= num) {
            while (i < 10) {
                fprintf(fo, "%d\n", t[i]);
                i++;
                k++;
            }
        }
    }
    fclose(fo);
    fclose (tt);
}

void main() {
    int * tab;
    int pos = 0;
    int i;
    tab = (int * ) malloc(10 * sizeof(int));

    FILE * in , * out;
    extract( in , tab, & pos);
    tab_text(tab, "output.txt");
    do {
        extract( in , tab, & pos);
        tri_tab_fiche(tab, out);
    } while (pos < line_number("input.txt"));
}
