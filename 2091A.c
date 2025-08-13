#include <stdio.h>
#include <stdlib.h>

#define MAX_N 20

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
  int bag[MAX_N] = {0};
  for (int i = 0; i < n; i++)
    scanf("%d", &bag[i]);

  int zeros = 3, ones = 1, threes = 1, twos = 2, fives = 1;

  for (int i = 0; i < n; i++) {
    switch (bag[i]) {
    case 1: {
      if (ones == 0)
        continue;
      else
        ones--;
      break;
    }
    case 2: {
      if (twos == 0)
        continue;
      else
        twos--;
      break;
    }
    case 3: {
      if (threes == 0)
        continue;
      else
        threes--;
      break;
    }
    case 0: {
      if (zeros == 0)
        continue;
      else
        zeros--;
      break;
    }
    case 5: {
      if (fives == 0)
        continue;
      else
        fives--;
      break;
    }
    default:
      break;
    }

    if (ones == 0 && twos == 0 && zeros == 0 && threes == 0 && fives == 0) {
      printf("%d\n", i + 1);
      return;
    }
  }
  printf("0\n");
}
