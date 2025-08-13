#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  if (n % 2 == 0) {
    printf("0\n");
    return;
  }

  int first_digit = 0;
  int found_even_inside = 0;

  int pos = 0;
  while (n > 0) {
    int d = n % 10;
    if (n < 10) {
      first_digit = d; // the most significant digit
    } else if (d % 2 == 0) {
      found_even_inside = 1;
    }
    n /= 10;
    pos++;
  }

  if (first_digit % 2 == 0) {
    printf("1\n");
  } else if (found_even_inside) {
    printf("2\n");
  } else {
    printf("-1\n");
  }
}
