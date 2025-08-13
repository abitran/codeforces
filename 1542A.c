#include <stdio.h>
#include <stdlib.h>

void solve(int);

int main(int argc, char *argv[]) {
  int t;
  int n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    solve(n);
  }

  return EXIT_SUCCESS;
}

void solve(int n) {
  int odds = 0;
  int evens = 0;
  for (int i = 0; i < 2 * n; i++){
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
      evens++;
    else
      odds++;
  }

  printf("%s\n", odds==evens ? "YES":"NO");
}
