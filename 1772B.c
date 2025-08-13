#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve();

void rotate90(int[2][2], int[2][2]);

bool isbeauty(int[2][2]);

int main(int argc, char *argv[]) {
  int t;
  scanf("%d", &t);
  while (t--)
    solve();
  return EXIT_SUCCESS;
}

void solve() {
  int mat[2][2];
  for (int row = 0; row < 2; row++) {
    for (int col = 0; col < 2; col++) {
      scanf("%d", &mat[row][col]);
    }
  }

  int rotated[2][2];
  int temp[2][2];
  memcpy(temp, mat, sizeof(mat));

  for (int i = 0; i < 4; i++) {
    if (isbeauty(rotated)) {
      puts("YES");
      return;
    }
    rotate90(temp, rotated);
    memcpy(temp, rotated, sizeof(rotated));
  }

  puts("NO");
}

void rotate90(int a[2][2], int b[2][2]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      b[j][1 - i] = a[i][j];
    }
  }
}

bool isbeauty(int mat[2][2]) {
  return (mat[0][0] < mat[0][1] && mat[1][0] < mat[1][1] &&
          mat[0][0] < mat[1][0] && mat[0][1] < mat[1][1]);
}
