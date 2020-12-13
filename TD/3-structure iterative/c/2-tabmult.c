#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Saisir un entier:");
    scanf("%d", &n);
    printf(" |\t");
    for (i = 1; i <= n; i++) {
        printf("%d\t", i);
    }
    printf("\n=|");

    for (i = 1; i <= n; i++) {
        printf("========");
    }

    printf("\n");

    for (i = 1; i <= n; i++) {
        printf("%d|\t", i);
        for (j = 1; j <= n; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}