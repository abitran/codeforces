#include <stdio.h>
#include <stdlib.h>

typedef enum { chest = 0, biceps, back } excs;

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  int exex[3] = {0};
  scanf("%d", &n);
  int routine[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &routine[i]);

  for (int i = 0; i < n; i++) {
    exex[i % 3] += routine[i];
  }

  if (exex[chest] > exex[biceps] && exex[chest] > exex[back])
    puts("chest");
  else if (exex[biceps] > exex[chest] && exex[biceps] > exex[back])
    puts("biceps");
  else
    puts("back");
}
