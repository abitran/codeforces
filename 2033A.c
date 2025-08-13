#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void solve();

void solve_alt();

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--) {
    //solve();
    solve_alt();
  }
  return EXIT_SUCCESS;
}

void solve() {
  int n;
  int x = 0, i = 1;
  scanf("%d", &n);
  while (true) {
    x += -1 * (2 * i - 1);
    if (x > n || x < -n) {
      printf("Sakurako\n");
      break;
    }
    i++;
    x += 2 * i - 1;
    if (x > n || x < -n) {
      printf("Kosuke\n");
      break;
    }
    i++;
  }
}

void solve_alt() {
  int n;
  scanf("%d", &n);
  int x = 0, steps = 1, sakurako_moves = 1;

  while (true) {
    x += sakurako_moves ? -steps : steps;
    if (x > n || x < -n) { 
      printf("%s", sakurako_moves ? "Sakurako\n" : "Kosuke\n");
      break;
    }
    steps += 2;
    sakurako_moves = !sakurako_moves;

  }
}
