#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

int main(int argc, char **argv) {

  int n;
  scanf("%d", &n);
  int team[n];
  int ts1[5001], ts2[5001], ts3[5001];
 
  memset(ts1, 0, sizeof(ts1));
  memset(ts2, 0, sizeof(ts2));
  memset(ts3, 0, sizeof(ts3));

  for (int i = 0; i < n; i++)
    scanf("%d", &team[i]);

  int t1 = 0, t2 = 0, t3 = 0;
 
  for (int i = 0; i < n; i++) {
    if (team[i] == 1) {
      ts1[t1] = i + 1;
      t1++;
    }
    if (team[i] == 2) {
      ts2[t2] = i + 1;
      t2++;
    }
    if (team[i] == 3) {
      ts3[t3] = i + 1;
      t3++;
    }
  }

  int min = MIN(MIN(t1, t2), t3);
  
  if (min > 0) {
    printf("%d\n", min);
    for (int i = 0; i < min; i++) {
      printf("%d %d %d\n", ts1[i], ts2[i], ts3[i]);
    }
  } else
    printf("%d\n", min);

  return EXIT_SUCCESS;
}
