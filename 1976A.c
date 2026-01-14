#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();
int cmp(const void *, const void *);

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
  char passwd[n + 2];
  scanf("%s", passwd);
  size_t len = strlen(passwd);
  char *sorted;
  sorted = strdup(passwd);
  qsort(sorted, len, sizeof(char), cmp);
  if (strcmp(passwd, sorted) == 0) {
    puts("YES");
    return;
  }

  puts("NO");
}

int cmp(const void *a, const void *b) { return *(char *)a - *(char *)b; }
