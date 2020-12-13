#include <stdio.h>
void main()
{
  float a, b, res;
  char op;
  res = 0;
  printf("a=");
  scanf("%f", &a);

  printf("operateur:");
  scanf(" %c", &op);

  printf("b=");
  scanf("%f", &b);

  switch (op) {
    case '+':
      res = a + b;
      printf("%.2f %c %.2f = %.2f\n", a, op, b, res);
      break;

    case '-':
      res = a - b;
      printf("%.2f %c %.2f = %.2f\n", a, op, b, res);
      break;

    case '*':
      res = a * b;
      printf("%.2f %c %.2f = %.2f\n", a, op, b, res);
      break;

    case '/':
      if (b != 0) {
        res = a / b;
        printf("%.2f %c %.2f = %.2f\n", a, op, b, res);
      } else {
        printf("operation impossible\n");
      }
      break;
    default:
      printf("operateur invalide\n");
  }
}