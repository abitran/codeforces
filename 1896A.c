#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_N 10

bool is_sorted(int[], int);

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
  int a[MAX_N];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  if (is_sorted(a, n)) {
    printf("YES\n");
    return;
  }

  bool changed;
  do {
    changed = false;
    for (int i = 1; i < n - 1; i++) {
      if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
        // Swap a[i] and a[i + 1]
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
        changed = true;
      }
    }
  } while (changed);

  puts(is_sorted(a, n) ? "YES" : "NO");
}

bool is_sorted(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    if (a[i + 1] < a[i]) {
      return false;
    }
  }
  return true;
}
