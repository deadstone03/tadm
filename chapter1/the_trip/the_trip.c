#include <stdio.h>

int main() {
  int n;
  while(scanf("%d", &n) != EOF) {
    if (n == 0) {
      break;
    }
    int i;
    long values[n];
    long sum = 0, avg;
    for (i = 0; i < n; ++i) {
      double value;
      scanf("%lf", &value);
      values[i] = value * 100;
      sum += values[i];
    }
    avg = sum / n;

    long pay1 = 0;
    long pay2 = 0;
    for (i = 0; i < n; ++i) {
      if (values[i] < avg) {
        pay1 += avg - values[i];
      } else {
        pay2 += values[i] - avg;
      }
    }
    long pay = pay1 > pay2? pay2: pay1;

    printf("$%.2lf\n", pay / 100.0);
  }
}
