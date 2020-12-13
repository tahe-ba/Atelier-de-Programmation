#include <stdio.h>
void main()
{
    int n, i;
    printf("Saisir un entier:");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d\t", i);
    }
    printf("\n");
    for (i = 1; i <= 10; i++) {
        printf("=======\t");
    }
    printf("\n");

    for (i = 1; i <= 10; i++) {
        printf("%d\t", i * n);
    }
    printf("\n");
}