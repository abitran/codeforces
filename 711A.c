#include <stdio.h>
#include <stdlib.h>

void solve();

int main(int argc, char *argv[]) {
  solve();
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  scanf("%d", &n);
  char seats[n][6];
  for (int i = 0; i < n; i++)
    scanf("%s", seats[i]);

  int found = 0;

  for (int i = 0; i < n; i++) {
    if (seats[i][0] == 'O' && seats[i][1] == 'O') {
      found = 1;
      seats[i][0] = seats[i][1] = '+';
      break;
    }
    if (seats[i][3] == 'O' && seats[i][4] == 'O') {
      found = 1;
      seats[i][3] = seats[i][4] = '+';
      break;
    }
  }

  if (!found) {
    puts("NO");
    return;
  }

  puts("YES");

  for (int i = 0; i < n; i++)
    printf("%s\n", seats[i]);
}
