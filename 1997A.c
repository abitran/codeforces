#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXL 11

void solve();

char random_not(char);

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
    char c = random_not(s[0]);
    printf("%c%s\n", c, s);
    return;
  }

  int i = 0;

  for (; i < slen; i++) {
    char curr = s[i];
    char next = s[i + 1];
    if (curr == next) {
      printf("%c", curr);
      char c = random_not(curr);
      printf("%c", c);
      printf("%c", next);
      for (int j = i + 2; j < slen; j++) {
        printf("%c", s[j]);
      }
      printf("\n");
      return;
    } else
      printf("%c", s[i]);
  }
  char c = random_not(s[slen - 1]);

  printf("%c\n", c);
  return;
}

char random_not(char ch) {
  char r_char;
  do {
    r_char = 'a' + (rand() % 26);
  } while (ch == r_char);

  return r_char;
}
