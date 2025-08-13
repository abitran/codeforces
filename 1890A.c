#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100
#define NUMS 1000000

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
  int a[MAX_N];
  long long freq[NUMS] = {0};
  int unique_count = 0;
  int uniques[MAX_N] = {0};

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if (freq[a[i]] == 0) {
      uniques[unique_count++] = a[i];
    }
    freq[a[i]]++;
  }

  if (n == 2) {
    puts("YES");
    return;
  }

  if (unique_count > 2)
    puts("NO");

  else if (unique_count == 1)
    puts("YES");
  else {
    int diff = abs(freq[uniques[0]] - freq[uniques[1]]);
    puts(diff <= 1 ? "YES" : "NO");
  }
}
