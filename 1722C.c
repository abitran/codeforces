#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 4
#define NUM_PLAYERS 3

typedef struct {
  int points;
  char word[MAX_WORDS][MAX_WORD_LEN];
} Player;

typedef struct {
  char *key;
  int value;
} Entry;

typedef struct {
  Entry *entries;
  size_t size;
  size_t count;
} HashTable;

unsigned long hash(const char *);

HashTable *ht_create(size_t);
void ht_insert(HashTable *, const char *, int);
int ht_get(HashTable *, const char *);
void ht_free(HashTable *);

int is_word_present(char *, char[][MAX_WORD_LEN], int);

void solve();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  Player players[NUM_PLAYERS];
  int n;
  scanf("%d", &n);

  for (int i = 0; i < NUM_PLAYERS; i++) {
    players[i].points = 0;
    for (int j = 0; j < n; j++)
      scanf("%s", players[i].word[j]);
  }

  HashTable *freq = ht_create(4096);

  for (int i = 0; i < NUM_PLAYERS; i++) {
    for (int j = 0; j < n; j++)
      ht_insert(freq, players[i].word[j], 1);
  }

  for (int i = 0; i < NUM_PLAYERS; i++) {
    for (int j = 0; j < n; j++) {
      int count = ht_get(freq, players[i].word[j]);
      if (count == 1)
        players[i].points += 3;
      else if (count == 2)
        players[i].points += 1;
    }
  }

  printf("%d %d %d\n", players[0].points, players[1].points, players[2].points);
}

unsigned long hash(const char *s) {
  unsigned long h = 5381;
  int c;
  while ((c = *s++))
    h = ((h << 5) + h) + c;
  return h;
}

HashTable *ht_create(size_t size) {
  HashTable *ht = malloc(sizeof(HashTable));
  ht->size = size;
  ht->count = 0;
  ht->entries = calloc(size, sizeof(Entry));
  return ht;
}

void ht_insert(HashTable *ht, const char *key, int value) {
  unsigned long index = hash(key) % ht->size;
  while (ht->entries[index].key && strcmp(ht->entries[index].key, key) != 0)
    index = (index + 1) % ht->size;
  if (!ht->entries[index].key) {
    ht->entries[index].key = strdup(key);
    ht->entries[index].value = value;
    ht->count++;
  } else {
    ht->entries[index].value += value;
  }
}

int ht_get(HashTable *ht, const char *key) {
  unsigned long index = hash(key) % ht->size;
  while (ht->entries[index].key) {
    if (strcmp(ht->entries[index].key, key) == 0)
      return ht->entries[index].value;
    index = (index + 1) % ht->size;
  }
  return 0;
}

void ht_free(HashTable *ht) {
  for (size_t i = 0; i < ht->size; i++) {
    free(ht->entries[i].key);
  }
  free(ht->entries);
  free(ht);
}
