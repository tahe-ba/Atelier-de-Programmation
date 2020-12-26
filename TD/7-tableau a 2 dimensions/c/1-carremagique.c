#include<stdio.h>
#include<stdlib.h>
void main() {
    int t[15][15], v[300];
    int i, j, n, som_mag, s;
    int mag = 1;
    printf("Donnez la dimension du carre:");
    scanf("%d", & n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("t[%d][%d]:", i, j);
            scanf("%d", & t[i][j]);
        }
    }
     //affichage tableau
      for (i=0;i<n;i++){
      printf(">>>>>>>>");
      }
      printf("\n");
      for(i=0;i<n;i++){
         for(j=0;j<n;j++){
               printf("%d\t",t[i][j]);
         }
         printf("\n");
      }
      for (i=0;i<n;i++){
      printf(">>>>>>>>");
      }
      printf("\n");

    som_mag = 0;
    for (i = 0; i < n; i++)
        som_mag += t[i][i];
    for (i = 0; i < n; i++) {
        s = 0;
        for (j = 0; j < n; j++)
            s += t[i][j];
        if (s != som_mag) {
            mag = 0;
            break;
        }
        s = 0;
        for (j = 0; j < n; j++)
            s += t[j][i];
        if (s != som_mag) {
            mag = 0;
            break;
        }
    }
    s = 0;
    for (i = 0; i < n; i++)
        s += t[i][n - i - 1];
    if (s != som_mag)
        mag = 0;
    if (mag == 1) {
        for (i = 1; i <= n * n; i++)
            v[i] = 0;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                if (v[t[i][j]] == 1 || t[i][j] > n * n || t[i][j] < 1) {
                    mag = 0;
                    break;
                }
            else v[t[i][j]] = 1;
            if (mag == 0)
                break;
        }
    }
    if (mag == 1) printf("Le tableau est un carre magique.\n");
    else printf("Le tableau n'est pas un carre magique.\n");
}