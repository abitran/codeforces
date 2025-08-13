#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXL 11

void solve();

char random_char();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  srand(time(NULL));
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char s[MAXL];
  scanf("%s", s);
  size_t slen = strlen(s);
  if (slen == 1) {
    char c;
    while ((c = random_char()) != s[0]) {
      printf("%c%s\n", c, s);
      return;
    }
  }

  int dd = 1;

  for (int i = 0; i < slen; i++) {
    char next = s[i + 1];
    if (s[i] == next) {
      dd = 0;
      char c = random_char();
      printf("%c", s[i]);
      printf("%c", c);
      printf("%c", next);
      for (int j = i + 2; j < slen; j++) {
        printf("%c", s[j]);
      }
      printf("\n");
      return;
    } else if (dd) {
      printf("%c", s[i]);
      return;
    }
  }

  printf("\n");
}

char random_char() {
  char r_char = 'a' + (rand() % 26);
  return r_char;
}
