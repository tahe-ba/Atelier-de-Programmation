#include <stdio.h>
#include <stdlib.h>
//function that sorts an array
void bubble_sort(int list[]){
  int c, d, t;
  for (c = 0 ; c < 9; c++) { 
    for (d = 0 ; d < 9 - c ; d++) { 
      if (list[d] > list[d+1]) { 
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
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
        bubble_sort(t);
        x++;
    } while ((!feof(finp)) && x > 10);
    fclose(finp);
    * pp += 10;
}
//write to text from array
void tab_text(int t[10], char * out) {
    int i;
    FILE * fout = fopen(out, "w+");
    for (i = 0; i < 10; i++) {
        fprintf(fout, "%d\n", t[i]);
    }
    fclose(fout);
}
//return line nuber
int line_number(char * p) {
    FILE * f;
    int tmp, i = 0;
    f = fopen(p, "r");
    while (fscanf(f, "%d", & tmp) == 1) {
        i++;
    }
    return i;

}
//tri
void tri_tab_fiche(int t[10], FILE * fo) {
    FILE * fi = fopen("output.txt", "r");
    int i = 0, num, j, k;
    j = k = 0;
    num = line_number("output.txt");
    int * arr;
    arr = (int * ) malloc(num * sizeof(int));
    while ((fscanf(fi, "%d", & arr[i]) == 1) && (i < num - 1)) {
        i++;
    }
    fclose(fi);
    fo = fopen("output.txt", "w+");
    rewind(fo);
    int m, n;
    i = 0;
    j = 0;
    while (i < 10 && j < num) {
        if (t[i] < arr[j]) {
            fprintf(fo, "%d\n", t[i]);
            i++;
        } else {
            fprintf(fo, "%d\n", arr[j]);
            j++;
        }
        k++;
    }
    if (i >= 10) {
        while (j < num) {
            fprintf(fo, "%d\n", arr[j]);
            j++;
            k++;
        }
    }
    if (j >= num) {
        while (i < 10) {
            fprintf(fo, "%d\n", t[i]);
            i++;
            k++;
        }
    }
    free(arr);
    fclose(fo);
}

void main() {
    int * tab;
    int pos = 0;
    int i;
    tab = (int * ) malloc(10 * sizeof(int));

    FILE * in , * out;
    extract( in , tab, & pos);
    tab_text(tab, "output.txt");
    while (pos < line_number("input.txt")||(pos<10)){
        extract( in , tab, & pos);
        tri_tab_fiche(tab, out);
    }
}