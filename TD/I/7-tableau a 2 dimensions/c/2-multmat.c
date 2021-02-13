#include <stdio.h>

void main() {
    int a[50][50]; /* matrice donnée   */
    int b[50][50]; /* matrice donnée   */
    int c[50][50]; /* matrice résultat */
    int n, m, p; /* dimensions des matrices */
    int i, j, k; /* indices courants */

    /* saisie des données */
    printf("*** matrice a ***\n");
    printf("nombre de lignes de   a (max.50) : ");
    scanf("%d", & n);
    printf("nombre de colonnes de a (max.50) : ");
    scanf("%d", & m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) {
            printf("elément[%d][%d] : ", i, j);
            scanf("%d", & a[i][j]);
        }
    printf("*** matrice b ***\n");
    printf("nombre de lignes de   b : %d\n", m);
    printf("nombre de colonnes de b (max.50) : ");
    scanf("%d", & p);
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++) {
            printf("elément[%d][%d] : ", i, j);
            scanf("%d", & b[i][j]);
        }
    /* affichage des matrices */
    printf("matrice donnée a :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%7d", a[i][j]);
        printf("\n");
    }
    printf("matrice donnée b :\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++)
            printf("%7d", b[i][j]);
        printf("\n");
    }
    /* affectation du résultat de la multiplication à c */
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++) {
            c[i][j] = 0;
            for (k = 0; k < m; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    /* edition du résultat */
    printf("matrice résultat c :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++)
            printf("%7d", c[i][j]);
        printf("\n");
    }
}