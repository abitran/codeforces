#include <stdio.h>
#include <stdlib.h>

#define NUM_INT 7

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int b[NUM_INT] = {0};
  for (int i = 0; i < NUM_INT; i++)
    scanf("%d", &b[i]);

  long long target = b[NUM_INT - 1];

  long long diff = target - b[0];

  for (int i = 1; i < NUM_INT; i++) {
    for (int j = i + 1; j < NUM_INT - 1; j++) {
      if (diff == b[i] + b[j]) {
        printf("\n%d %d %d\n", b[0], b[i], b[j]);
        return;
      }
    }
  }
}
