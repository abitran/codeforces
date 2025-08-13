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
  const int len = 5;
  char time[len+1];
  int pm = 1;
  scanf("%s", time);
  int hh, h1, h2, min1, min2, mn;
  h1 = (int)time[0] - '0';
  h2 = (int)time[1] - '0';
  min1 = (int)time[3] - '0';
  min2 = (int)time[4] - '0';
  
  hh = h1 * 10 + h2;
  if (hh < 12)
    pm = 0;
  
  hh %= 12;
  if (hh == 0)
    printf("12:%c%c", min1 + '0', min2 + '0');

  else {
    if (hh < 10)
      printf("0%c:%c%c", hh + '0', min1 + '0', min2 + '0');
    else 
      printf("%c%c:%c%c", (hh / 10) + '0', (hh % 10) + '0', min1 + '0', min2 + '0');
  }
 
  printf(" %s\n", pm == 1 ? "PM":"AM");
  
}
