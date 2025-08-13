#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) (x > y ? x : y)

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int max1 = INT_MIN;
  int max2 = max1;
  int s[n];
  int pos_max1 = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &s[i]);
    if (s[i] > max1) {
      max1 = s[i];
      pos_max1 = i;
    }
  }

  for (int i = 0; i < n; i++) {
    if (i != pos_max1)
      max2 = MAX(max2, s[i]);
  }

  if (max2 == INT_MIN)
    max2 = max1;

  for (int i = 0; i < n; i++)
    printf("%d ", s[i] - (s[i] == max1 ? max2 : max1));

  printf("\n");
}
