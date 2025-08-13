#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  char a[101];
  char b[101];

  scanf("%s", a);
  size_t len_a = strlen(a);
  int j = 0;
  for (int i = len_a-1; i >= 0; i--) {
    if (a[i] == 'p')
      b[j++] = 'q';
    else if (a[i] == 'q')
      b[j++] = 'p';
    else
      b[j++] = a[i];
  }
  b[j] = '\0';

  printf("%s\n", b);
}
