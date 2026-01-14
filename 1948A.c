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
  int n;
  scanf("%d", &n);
  if (n % 2 == 1) {
    puts("NO");
    return;
  }

  puts("YES");
  char res[205];
  int steps = n / 2;
  char sep = 'W';
  int pos = 0;

  for (int i = 0; i < steps; i++) {
    res[pos++] = i + 'A';
    res[pos++] = i + 'A';

    if (i != steps - 1) {
      res[pos++] = sep;
      sep++;
      if (sep > 'Z')
        sep = 'B';
    }
  }
  res[pos] = '\0';
  puts(res);
}
