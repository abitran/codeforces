#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_N 51

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
  scanf("%d", &n);
  char sound[MAX_N];
  scanf("%s", sound);
  const char *target = "meow";
  size_t len = strlen(sound);

  if (tolower(sound[0]) != 'm' && tolower(sound[len - 1]) != 'w') {
    puts("NO");
    return;
  }

  int stage = 0;
  char prev = '\0';

  for (int i = 0; sound[i]; i++) {
    char c = tolower(sound[i]);
    if (c != 'm' && c != 'e' && c != 'o' && c != 'w') {
      puts("NO");
      return;
    }

    if (c != prev) {
      if (c != target[stage]) {
        puts("NO");
        return;
      }
      stage++;
      prev = c;
    }
  }

  puts(stage == 4 ? "YES" : "NO");
}
