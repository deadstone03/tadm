#include <stdio.h>

long tree_n_plus_1(long init) {
  long value = init;
  long count = 1;
  while (value != 1) {
    if (value % 2 == 0) {
      value = value / 2;
    } else {
      value = value * 3 + 1;
    }
    count++;
  }
  return count;
}

long find_max(long left, long right) {
  long i;
  long max = -1;
  if (left > right) {
    long tmp = left;
    left = right;
    right = tmp;
  }
  for (i = left; i <= right; ++i) {
    long value = tree_n_plus_1(i);
    if (value > max) {
      max = value;
    }
  }
  return max;
}

int main() {
  long left, right;
  while(scanf("%ld %ld", &left, &right) != EOF) {
    long max = find_max(left, right);
    printf("%ld %ld %ld\n", left, right, max);
  }
}
