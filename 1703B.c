#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int balloons = 0;
    char s[n];
    char table[26] = {0};
    scanf(" %[^\n]s", s);

    for (int i = 0; i < n; i++) {
      if (table[s[i] - 'A'] == 0) {
        table[s[i] - 'A']++;
        balloons += 2;
      } else
        balloons += 1;
    }

    printf("%d\n", balloons);
  }

  return EXIT_SUCCESS;
}
