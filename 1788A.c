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
  int k;
  scanf("%d", &n);
  int a[n];
  int total2s = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if (a[i] == 2)
      total2s++;
  }

  int left2s = 0;
  for (int k = 0; k < n - 1; k++) {
    if (a[k] == 2)
      left2s++;

    int right2s = total2s - left2s;


    if (left2s == right2s) {
      printf("%d\n", k+1);
      return;
    }
  }
  printf("-1\n");
}
