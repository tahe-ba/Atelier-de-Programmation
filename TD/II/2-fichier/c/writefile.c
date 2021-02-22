#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE * fp, * f, * fn;
    char chain[80];
    int i, n = 0;
//fp to create file 
    fp = fopen("file.txt", "w");
    for (i = 1; i <= 3; i++) {
        printf("nom");
        scanf("%s", chain);
        fprintf(fp, "%s\n", chain);
    }
    fclose(fp);
//f read file print content
    f = fopen("file.txt", "r");
    fscanf(f, "%s", chain);
    while (!feof(f)) {
        printf("%s\n", chain);
        fscanf(f, "%s", chain);
    }
    fclose(f);
//fn count lines in file
    fn = fopen("file.txt", "r");
    while (!feof(fn)) {
        n++;
        fscanf(fn, "%s", chain);
    }
    printf("n=%d\n", n);

    fclose(fn);
}