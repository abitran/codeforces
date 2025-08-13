#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 50

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char a[MAXSIZE + 1];
  char b[MAXSIZE + 1];
  scanf("%s", a);
  scanf("%s", b);
  size_t len_a = strlen(a);
  size_t len_b = strlen(b);

  char size_a;
  char size_b;
  int Xs_a = 0;
  int Xs_b = 0;

  for (int i = 0; i < len_a; i++) {
    if (a[i] == 'X')
      Xs_a++;
    else
      size_a = a[i];
  }

  for (int i = 0; i < len_b; i++) {
    if (b[i] == 'X')
      Xs_b++;
    else
      size_b = b[i];
  }

  if (size_a == 'L' && (size_b == 'M' || size_b == 'S')) {
    puts(">");
    return;
  }

  if (size_a == 'M' && size_b == 'S') {
    puts(">");
    return;
  }

  if (size_b == 'M' && size_a == 'S') {
    puts("<");
    return;
  }

  if (size_b == 'L' && (size_a == 'M' || size_a == 'S')) {
    puts("<");
    return;
  }

  if (size_b == 'M' && size_a == 'S') {
    puts(">");
    return;
  }

  if (size_a == size_b) {
    if (Xs_a == Xs_b) {
      puts("=");
      return;
    }

    if (Xs_a > Xs_b && size_a == 'L') {
      puts(">");
      return;
    }
    if (Xs_b > Xs_a && size_b == 'L') {
      puts("<");
      return;
    }

    if (Xs_a > Xs_b && size_a == 'S') {
      puts("<");
      return;
    }
    if (Xs_b > Xs_a && size_b == 'S') {
      puts(">");
      return;
    }
  }
}
