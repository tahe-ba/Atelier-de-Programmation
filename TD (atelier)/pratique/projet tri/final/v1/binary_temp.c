#include <stdio.h>
void text_binary(char * inp, char * out) {
    int tmp;
    FILE * finp = fopen(inp, "r");
    FILE * fout = fopen(out, "w");
    do {
        fscanf(finp, "%d", & tmp);
        fwrite( & tmp, 1, sizeof(int), fout);
    } while (!feof(finp));
    fclose(finp);
    fclose(fout);
}
void binary_text(char * inp, char * out) {
    int tmp;
    FILE * finp = fopen(inp, "rb");
    FILE * fout = fopen(out, "w");
    while (fread( & tmp, sizeof(int), 1, finp) == 1)
        fprintf(fout, "%d\n", tmp);
    fclose(finp);
    fclose(fout);
}
void tri(char * inp) {
    int e1, e2, p = 1;
    FILE * finp = fopen(inp, "rb+");
    while (p) {
        p = 0;
        fread( & e1, sizeof(int), 1, finp);
        fread( & e2, sizeof(int), 1, finp);
        while (!feof(finp)) {
            if (e1 > e2) {
                fseek(finp, (sizeof(int) * -2), SEEK_CUR);
                fwrite( & e2, 1, sizeof(int), finp);
                fwrite( & e1, 1, sizeof(int), finp);
                p = 1;
            } else {
                e1 = e2;
            }
            fread( & e2, sizeof(int), 1, finp);
        }
        if (p) {
            rewind(finp);
        }
    }
    fclose(finp);
}
void main() {
    text_binary("entier.txt", "temp.dat");
    tri("temp.dat");
    binary_text("temp.dat", "output.txt");
}