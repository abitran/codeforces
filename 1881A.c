#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_N 26
#define MAX_OPS 5
#define MAX_BUFFER (MAX_N * (1 << MAX_OPS))

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
  int n, m;
  scanf("%d %d", &n, &m);
  char x[MAX_BUFFER] = {0};
  char s[MAX_N] = {0};
  int ops = 0;
  int x_len = n;
  scanf("%s", x);
  scanf("%s", s);
  x[x_len] = '\0';
  if (strcmp(s, x) == 0) {
    printf("\n%d\n", ops);
    return;
  }
  int found = false;
  int attemps = 6;
  while (attemps--) {
    if (strstr(x, s) != NULL) {
      found = true;
      break;
    }

    if (x_len > MAX_BUFFER/2)
      break;
    
    strcat(x, x);
    x_len *= 2;
    ops++;
  }
  printf("\n%d\n", found == true ? ops : -1);
}
