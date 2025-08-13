#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 26
#define MAX_DUR 501

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char contest[MAX_DUR];
  int n;
  scanf("%d", &n);
  scanf("%s", contest);

  int time_spent[MAX_CHARS] = {0};

  for (int i = 0; i < n; i++)
    time_spent[contest[i] - 'A']++;

  int done = 0;
  for (int i = 0; i < MAX_CHARS; i++) {
    if (time_spent[i] >= i + 1)
      done++;
  }

  printf("%d\n", done);
}
