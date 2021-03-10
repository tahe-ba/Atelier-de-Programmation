#include <stdio.h>

void main() {
    int a[50][50];
    int tc[50];
    int tl[50];
    int n, m;
    int i, j, l, c;
    printf("*** tableau a ***\n");
    printf("nombre de lignes de   a (max.50) : ");
    scanf("%d", & n);
    printf("nombre de colonnes de a (max.50) : ");
    scanf("%d", & m);

    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            printf("elément[%d][%d] : ", i, j);
            scanf("%d", & a[i][j]);
        }

    printf("matrice donnée a :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    do {
        printf("numero de ligne a extraire:");
        scanf("%d", & l);
    } while ((l >= n) || (l < 0));

    do {
        printf("numero de colonne a extraire:");
        scanf("%d", & c);
    } while ((c >= m) || (l < 0));

    for (i = 0; i < m; i++) {
        tl[i] = a[l][i];
    }

    for (i = 0; i < n; i++) {
        tc[i] = a[i][c];
    }

    printf("La ligne %d contient:\n",l);
    for (j = 0; j < m; j++) {
        printf("%d\t", tl[j]);
    }
    printf("\n");
    printf("La colonne %d contient:\n",c);
    for (i = 0; i < n; i++) {
        printf("%d\t", tc[i]);
    }
    printf("\n");
}