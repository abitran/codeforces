#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    char row1[n + 1];
    char row2[n + 1];
    scanf(" %[^\n]s", row1);
    scanf(" %[^\n]s", row2);
    for (int i = 0; i < n; i++) {
      if (row1[i] == 'G' || row1[i] == 'B')
        row1[i] = 'G';
    }
    for (int i = 0; i < n; i++) {
      if (row2[i] == 'G' || row2[i] == 'B')
        row2[i] = 'G';
    }

    printf("%s\n", strncmp(row1, row2, n) == 0 ? "YES" : "NO");
  }

  return EXIT_SUCCESS;
}
