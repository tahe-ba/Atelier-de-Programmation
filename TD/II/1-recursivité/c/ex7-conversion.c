#include <stdio.h>
//return integer
int conv_dec_bin_it(int num) {
    int bin = 0, k = 1;
    while (num) {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }
    return bin;
}
//just print result
void conv_it(int n) {
    int r[50], i,x,dec;
    char str[100];

    for (i = 0; n > 0; i++) {
        r[i] = n % 2;
        n = n / 2;
        x=i;
    }
    
    printf("\nLe nombre binaire est = ");
    for (i = x ; i >= 0; i--) {
        printf("%d", r[i]);
    }
    printf("\n");
}

void main() {
    int n;
    printf("Entrez le nombre à convertir: ");
    scanf("%d", & n);
    printf("%d en binaire est %d\n",n,conv_dec_bin_it(n));
}