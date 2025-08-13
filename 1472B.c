#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int t;
  int n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    int sum = 0;
    int candies[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &candies[i]);
      sum += candies[i];
    }

    if (sum % 2 != 0)  
      printf("NO\n");

    else {
      int ones=0, twos=0;
      for (int i = 0; i < n; i++) {
        if (candies[i] == 1) ones++;
        if (candies[i] == 2) twos++;
      }

      if ((sum % 2 == 0 && ones >= 2) || (ones == 0 && n % 2 == 0)) 
        printf("YES\n");


      else
        printf("NO\n");
    }
    
  }

  return EXIT_SUCCESS;
}
