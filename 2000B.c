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
  int a[n];

  // we load the array of seats.

  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  // we create an array of seats 1 occupied, 0 free.
  // 1-index

  int occupied[n + 1];

  for (int i = 1; i <= n; i++)
    occupied[i] = 0;

  // first person can seat in every location

  occupied[a[0]] = 1;

  for (int i = 1; i < n; i++) {
    int seat = a[i];

    if ((seat == 1 || !occupied[seat - 1]) &&
        (seat == n || !occupied[seat + 1])) {
      printf("NO\n");
      return;
    }
    occupied[seat] = 1;
  }

  printf("YES\n");
}
