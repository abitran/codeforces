#include <stdio.h>
#include <stdlib.h>

#define MAX(X,Y) ((X) > (Y) ? (X):(Y))

int dynamic(int, int []);

int main(int argc, char *argv[])
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("%d\n", dynamic(n, a));
  
  int count = 1;
  int max = 1;

  for (int i = 1; i < n; i++) {
    if (a[i] > a[i-1])
      count++;
    else {
      max = MAX(max, count);
      count = 1;
    }
  }

  max = MAX(max, count);

  printf("%d\n", max);
  

  return EXIT_SUCCESS;
}

int dynamic(int n, int a[]){
  int dp[n];
  dp[0] = 1;
  int max = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] > a[i-1]) {
      dp[i] = dp[i-1] + 1;
    }
    else{
      dp[i] = 1;
    }
    max = MAX(max, dp[i]);
  }

  return max;
}
