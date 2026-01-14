#include <stdio.h>
#include <stdlib.h>

#define MAXN 100

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
  char str[102];
  scanf("%s", str);
  for (int i = 0; i < n; i++) {
    if (str[i] == 'D')
      printf("U");
    else if (str[i] == 'U')
      printf("D");
    else
      printf("%c", str[i]);
  }
  printf("\n");
}
