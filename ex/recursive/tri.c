#include<stdio.h>

int estri(int t[], int n) {
    int s;
    if (n == 1) {
        return 1;
    } else {
        if (t[n] < t[n - 1]) {
            estri(t, n - 1);
        } else return 0;
    }
}

void main() {
    int t[100];
    int i, n;

    //size array input
    do {
        printf("taille :");
        scanf("%d", & n);
    } while (!(n >= 1));

    // array input
    for (i = 0; i < n; i++) {
        printf("element[%d]:", i);
        scanf("%d", & t[i]);
    }

    if (estri(t, n) == 1) {
        printf("le tableau est trié\n");
    } else {
        printf("le tableau n'est pas trié\n");
    }

    //print array
    printf("=> TABLEAU <=\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", t[i]);
    }
    printf("\n");
}