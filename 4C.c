#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char *name;
  char *value;
}hash_item;

int check_hash(hash_item *, char[]);

int main(int argc, char **argv) {
  int N;
  scanf("%d", &N);
  hash_item hashes[N];
  char word[32];

  for (int i = 0; i < N; i++) {
    scanf("%s", word);
    check_hash(&hashes[], word);

  }

  return EXIT_SUCCESS;
}
