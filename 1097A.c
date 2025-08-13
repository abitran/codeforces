#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char card_table[3];
  char hd[5][3];
  scanf("%s", card_table);
  fscanf(stdin, "%s %s %s %s %s", hd[0], hd[1], hd[2], hd[3], hd[4]);

  for (int i = 0; i < 5; i++) {
    if (hd[i][0] == card_table[0] || hd[i][1] == card_table[1]) {
       printf("YES\n");
       return 0;
    }
  }

  printf("NO\n");

  return EXIT_SUCCESS;
}
