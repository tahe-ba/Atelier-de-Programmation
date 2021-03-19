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

void main() {
    int tab[10];
    int pos = 0;

    FILE * in ;
    do {
        extract( in , tab, & pos);
        tab_text(tab, "output.txt");
    } while (pos < line_number("input.txt"));
}