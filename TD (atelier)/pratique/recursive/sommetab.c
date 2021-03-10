#include <stdio.h>
int sommetab_it(int t[],int n){
    int s,i;
    s=t[0];
    for (i=1;i<=n-1;i++){
        s=s+t[i];
    }
    return s;
}

int sommetab_rec(int t[],int n){
    int s;
    if (n==1){
        s=t[0];
    } else {
        s=t[n-1]+sommetab_rec(t,n-1);
    }
    return s;
}

void main(){
    int t[100];
    int i,n;

    //size array input
    do {
        printf("taille :");
        scanf("%d", & n);
    } while (!(n >= 1));

    // array input
    for (i = 0; i <n; i++) {
        printf("element[%d]:", i);
        scanf("%d", & t[i]);
    }
    //print array
    printf("=> TABLEAU <=\n");
    for(i=0;i<n;i++){
        printf("%d\t", t[i]);
    }
    printf("\n");

    printf("%d",sommetab_it(t,n));

    printf("\n");

}