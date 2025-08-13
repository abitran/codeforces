#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n, m;
  scanf("%d%d", &n, &m);
  int bw = 0;
  char p;
  for (int i = 0; i < n*m; i++) {
    scanf(" %c", &p);
    if (p == 'B' || p == 'W' || p == 'G')
      bw++;
  }

  printf("%s\n", bw == n*m ? "#Black&White":"#Color");


  return EXIT_SUCCESS;
}
