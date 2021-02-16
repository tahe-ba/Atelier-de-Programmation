#include <stdio.h>

int verif_tri(int t[], int n) {
    if (n == 1 || n == 0)
        return 1;
    if (t[n - 1] < t[n - 2])
        return 0;
    return verif_tri(t, n - 1);
}

void input(int * n) {
    do {
        printf(">> ");
        scanf("%d", n);
    } while ( * n <= 0);
}

void remplir(int * t, int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("t[%d] :", i + 1);
        scanf("%d", t + i);
    }
}

void afficher(int t[], int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d\t ", t[i]);
    }
    printf("\n");
}

void main() {
    int n, mini;
    int t[100];
    printf("taille de tableau ");
    input( & n);
    remplir(t, n);
    afficher(t, n);
    if (verif_tri(t, n))
        printf("tableau trié\n");
    else
        printf("tableau non trié\n");
}