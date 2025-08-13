#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    solve();
  }
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  int melody[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &melody[i]);

  for (int i = 0; i < n - 1; i++) {
    if ((abs(melody[i] - melody[i + 1]) != 5) &&
        (abs(melody[i] - melody[i + 1]) != 7)) {
      printf("NO\n");
      return;
    }
  }
  printf("\n");

  printf("YES\n");
}
