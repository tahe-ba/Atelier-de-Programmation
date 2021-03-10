#include<stdio.h>

int main() {
  int n;
  do {
    printf("Donner le nbre de terme: ");
    scanf("%d", & n);
  } while (n <= 0);

  printf("F0=1\n");
  if (n > 1) {
    printf("F1=1\n");
    
    if (n > 2) {
      int fn, fn_1 = 1, fn_2 = 1, i;
      for (i = 3; i <= n; i++) {
        fn = fn_1 + fn_2;
        printf("F%d=%d\n", i - 1, fn);
        fn_2 = fn_1;
        fn_1 = fn;
      }
    }
  }
}