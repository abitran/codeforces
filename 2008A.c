#include <stdio.h>
#include <stdlib.h>

void solve(int, int);

int main(int argc, char *argv[])
{
  int t, a, b;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &a, &b);
    solve(a, b);
  }
  return EXIT_SUCCESS;
}

void solve(int a, int b) {
  int sum = a*1 + b*2;
  if (sum % 2 != 0) {
    printf("NO\n");
    return;
  }
  int partial_sum = sum / 2;
  
  if (partial_sum % 2 == 0 || a > 0) {
    printf("YES\n");
  }
  else {
    printf("NO\n");
  }

}
