int ack(int a, int b) {

  if (a == 0)
      return b + 1;
  else
      if (n == 0)
          return ack (a - 1, 1);
      else
          return ack (a - 1, ack (a, b - 1));
}
