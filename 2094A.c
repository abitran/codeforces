#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  char s1[SIZE], s2[SIZE], s3[SIZE];
  fscanf(stdin, "%s %s %s", s1, s2, s3);
  printf("%c%c%c\n", s1[0], s2[0], s3[0]);
}
