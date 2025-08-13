#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 4
#define NUM_PLAYERS 3

typedef struct Player {
  int points;
  char word[MAX_WORDS][MAX_WORD_LEN];
} Player;

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

  char **wordlist = malloc(sizeof(char *) * NUM_PLAYERS * n);
  int total_words = 0;

  for (int i = 0; i < NUM_PLAYERS; i++) {
    players[i].points = 0;
    for (int j = 0; j < n; j++) {
      scanf("%3s", players[i].word[j]);
      wordlist[total_words] = malloc(MAX_WORD_LEN);
      strcpy(wordlist[total_words], players[i].word[j]);
      total_words++;
    }
  }

  int wordfreq[NUM_PLAYERS * n];
  memset(wordfreq, 0, sizeof(int) * NUM_PLAYERS * n);

  for (int i = 0; i < total_words; i++) {
    for (int j = 0; j < total_words; j++) {
      if (i != j && strcmp(wordlist[i], wordlist[j]) == 0) {
        wordfreq[i]++;
      }
    }
  }

  for (int i = 0; i < NUM_PLAYERS; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < total_words; k++) {
        if (strcmp(players[i].word[j], wordlist[k]) == 0) {
          int freq = wordfreq[k] + 1;
          if (freq == 1)
            players[i].points += 3;
          else if (freq == 2)
            players[i].points += 1;
          break;
        }
      }
    }
  }

  for (int i = 0; i < NUM_PLAYERS; i++)
    printf("%d ", players[i].points);
  printf("\n");

  for (int i = 0; i < total_words; i++) {
    free(wordlist[i]);
  }

  free(wordlist);
}
