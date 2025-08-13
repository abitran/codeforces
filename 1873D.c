#include <stdio.h>
#include <stdlib.h>

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
  int n, k;
  scanf("%d %d", &n, &k);
  char word[n+1];
  scanf(" %[^\n]s", word);
  int times = 0;
  for (int i = 0; i < n; i++) {
    if (word[i] == 'B') {
      i += k - 1;
      times++;
    }
  }
  printf("%d\n", times);
}
