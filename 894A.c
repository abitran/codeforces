#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(char *);

int main(int argc, char *argv[])
{
  char st[101];
  scanf("%[^\n]", st);
  solve(st);
  return EXIT_SUCCESS;
}

void solve(char *st) {
  size_t len = strlen(st);
  int times = 0;
  for (int i = 0; i < len; i++) {
    if (st[i] == 'A') {
      int rqs = 0, lqs = 0;
      for (int j = 0; j < i; j++) {
        if (st[j] == 'Q')
          lqs++;
      }
      for (int j = i + 1; j < len; j++) {
        if (st[j] == 'Q')
          rqs++;
      }

      times += lqs * rqs;

    }
  }
  printf("%d\n", times);
}


