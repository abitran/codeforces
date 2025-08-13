#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 200000

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char num[MAX_LEN];
  int n, d;
  scanf("%d %d", &n, &d);
  scanf("%s", num);

  for (int i = 0; i < n; i++) {
    if (num[i] - '0' >= d) {
      printf("%c", num[i]);
    } else {
      printf("%c", d + '0');
      for (int j = i; j < n; j++) {
        printf("%c", num[j]);
      }
      printf("\n");
      return;
    }
  }
  printf("%c\n", d + '0');
}
