#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int t;
  char digits[6];
  scanf("%d", &t);
  while (t--) {
    int front = 0, rear = 0;
    scanf("%s", digits);
    for (int i = 0; i < 3; i++)
      front += digits[i] - '0';

    for (int i = 5; i >= 3; i--)
      rear += digits[i] - '0';

    printf("%s\n", front == rear ? "YES" : "NO");
  }

  return EXIT_SUCCESS;
}
