#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 101

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char s[MAX_SIZE];
  scanf("%s", s);
  size_t len = strlen(s);
  int reduce = 0;
  for (int i = 0; i < len - 1; i++) {
    if (s[i] == s[i + 1]) {
      reduce = 1;
      break;
    }
  }
  printf("%zd\n", reduce == 1 ? 1 : len);
}
