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
  int n, k, x;
  scanf("%d %d %d", &n, &k, &x);
  if (k == 1 && x == 1) {
    printf("NO\n");
    return;
  }

  if (x != 1) {
    printf("YES\n");
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
      printf("1 ");
    printf("\n");
  } else {
    if (k == 1) {
      printf("NO\n");
      return;
    }

    if (n % 2 == 0) {
      printf("YES\n");
      printf("%d\n", n / 2);
      for (int i = 0; i < n / 2; i++)
        printf("2 ");
      printf("\n");
      return;
    } else {
      if (k >= 3 && n >= 3) {
        printf("YES\n");
        int count = 1 + (n - 2) / 2;
        printf("%d\n", count);
        printf("3 ");
        for (int i = 0; i < (n - 3) / 2; i++)
          printf("2 ");
        printf("\n");
        return;
      } else {
        printf("NO\n");
        return;
      }
    }
  }
}
