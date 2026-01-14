#include <stdio.h>
#include <stdlib.h>

#define MAXN 1000000

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int ones = 0;
  int zeros = 0;
  int n;
  scanf("%d", &n);
  char seq[n + 1];
  scanf("%s", seq);
  for (int i = 0; i < n; i++) {
    if (seq[i] == 'n')
      ones++;
    else if (seq[i] == 'z')
      zeros++;
  }

  for (int i = 0; i < ones; i++)
    printf("1 ");

  for (int i = 0; i < zeros; i++)
    printf("0 ");

  printf("\n");
}
