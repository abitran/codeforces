#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n, k;
  scanf("%d %d", &n, &k);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  int count_hikes = 0;

  for (int i = 0; i <= n - k; i++) {
    bool can_hike = true;
    for (int j = i; j < i + k; j++) {
      if (a[j] == 1) {
        can_hike = false;
        break;
      }
    }
    if (can_hike) {
      count_hikes++;
      i += k; // skip to the day after the hike ends
    }
  }

  printf("%d\n", count_hikes);
}
