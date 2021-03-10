#include <stdio.h>

int max(int t[],int n) {
    if (n == 1)
        return t[0];
    else {
        if (t[n - 1] > max(t, n-1))
            return t[n - 1];
        else
            return max(t, n-1);
    }
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
    printf("le maximum du tableau est %d\n", max(t,n));
}