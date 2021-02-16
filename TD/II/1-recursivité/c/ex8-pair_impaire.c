#include <stdio.h>

void impair(int n);

void pair(int n) {
    if (n == 0)
        printf("pair\n"); //nb est pair si nb-1 est impair
    else
        impair(n - 1);
}
void impair(int n) {
    if (n == 0)
        printf("impair\n");
    else
        pair(n - 1); //nb est impair si nb-1 est pair
}

void main() {
    int x;
    do {
        printf("x=");
        scanf("%d", & x);
    } while (x < 0);
    pair(x);
}