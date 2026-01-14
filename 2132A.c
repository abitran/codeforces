#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 12

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
  int m;
  scanf("%d", &n);
  char a[n + 1];
  scanf("%s", a);
  scanf("%d", &m);
  char b[m + 1];
  scanf("%s", b);
  char c[MAXSIZE];
  scanf("%s", c);
  char dilma[MAXSIZE];
  char vima[MAXSIZE];
  int vi = m - 1;
  int di = 0;
  for (int i = 0; i < m; i++) {
    if (c[i] == 'D') {
      dilma[di++] = b[i];
    } else {
      vima[vi--] = b[i];
    }
  }
  dilma[di] = '\0';
  vima[m - vi - 1] = '\0';

  strcat(vima, a);
  strcat(vima, dilma);
  printf("%s\n", vima);
}
