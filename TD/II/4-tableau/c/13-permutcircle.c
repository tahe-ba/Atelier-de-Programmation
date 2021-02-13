#include <stdio.h>
void main(){
    int t[100];
    int i,n,x;

//size array input
do {
    printf("taille :");
    scanf("%d", & n);
} while (!(n >= 1));

// array input
for (i = 1; i <=n; i++) {
    printf("element[%d]:", i);
    scanf("%d", & t[i]);
}

// circulair permutation
    x = t[1];

    for (i = 1; i <= n-1; i++){
        t[i] = t[i + 1];
    }

    t[n] = x;

//print array
printf("=> TABLEAU <=\n");
for(i=1;i<=n;i++){
    printf("%d\t", t[i]);
}
printf("\n");
}
