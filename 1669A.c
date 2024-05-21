#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int t;
  int rating;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &rating);
    switch (rating) {
      case 1900 ... 99999:
        printf("Division 1\n");
        break;
      case 1600 ... 1899:
        printf("Division 2\n");
        break;
      case 1400 ... 1599:
        printf("Division 3\n");
        break;
      default:
        printf("Division 4\n");
        break;

    }
  }

  return EXIT_SUCCESS;
}
