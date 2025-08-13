#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  scanf("%d", &t);
  int n;
  while (t--) {
    scanf("%d", &n);
    int tasks[26] = {0};
    char days[n];
    scanf(" %s", days);
    int i;
    int flag = 1;
    for (i = 1; i <= n; i++) {
      int letter = days[i-1] - 'A';
      if (tasks[letter] == 0) {
        tasks[letter] = i;
      }
      else if (tasks[letter] > 0) {
        if (i - tasks[letter] == 1) 
          tasks[letter] = i;
        else {
          printf("NO\n");
          flag = 0;
          break;
        }
      }
    }

    if ((i >= n) && flag)
      printf("YES\n");
  }
  

  return EXIT_SUCCESS;
}
