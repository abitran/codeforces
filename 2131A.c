#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXN 10

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
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < n; i++)
    scanf("%d", &b[i]);

  bool step1 = false;
  int iter = 0;

  while (1) {
    int step1_index = -1;
    for (int i = 0; i < n; i++) {
      if (a[i] > b[i]) {
        step1_index = i;
        break;
      }
    }

    if (step1_index == -1)
      break;

    a[step1_index]--;

    int step2_index = -1;
    for (int i = 0; i < n; i++) {
      if (a[i] < b[i]) {
        step2_index = i;
        break;
      }
    }
    if (step2_index != -1)
      a[step2_index]++;

    iter++;
  }

  printf("%d\n", iter + 1);
}
