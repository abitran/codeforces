#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return EXIT_SUCCESS;
}

void solve() {
  char word[11];
  scanf("%s", word);
  size_t len = strlen(word);
  if (len == 2) {
    printf("i\n");
    return;
  }
  char next[len+1];
  memcpy(next, word, len-2);
  next[len-2] = '\0';
  strcat(next, "i");
  printf("%s\n", next);

}
