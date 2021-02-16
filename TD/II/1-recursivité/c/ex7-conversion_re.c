#include <stdio.h>
//return integer
int conv_dec_bin_rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2 + 10 * conv_dec_bin_rec(n / 2));
    }
}
//just print resul
void conv_rec(int n) {
    int r;
    if (n > 0) {
        r = n % 2;
        conv_rec(n / 2);
        printf("%d", r);
    }
}

int main(void) {
    int n;
    printf("Entrez le nombre à convertir: ");
    scanf("%d", & n);
    printf("%d en binaire est %d\n",n,conv_dec_bin_rec(n));
}