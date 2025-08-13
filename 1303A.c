#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char s[SIZE];
  scanf("%s", s);
  int first1 = -1;
  int last1 = -1;
  int moves = 0;
  size_t len = strlen(s);
  
  for (int i = 0; i < len; i++) {
    if (s[i] == '1') {
      if (first1 == -1)
        first1 = i;
      last1 = i;
    }
  }

  for (int i = first1; i <= last1; i++) {
    if (s[i] == '0') {
      moves++;
    }
  }

  printf("%d\n", moves);
}
