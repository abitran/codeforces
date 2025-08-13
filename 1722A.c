#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *, const void *);

int main(int argc, char *argv[])
{
  int t;
  int n;
  scanf("%d", &t);
  char temp[] = "Timur";
  size_t len = strlen(temp);

  while (t--) {
    scanf("%d", &n);
    char name[n];
    scanf(" %10[^\n]s", name);
    
    if (n != len)
      printf("NO\n");
    
    else { 
      qsort(name, n, sizeof(char), cmp);
      qsort(temp, n, sizeof(char), cmp);
      printf("%s\n", strncmp(name, temp, n) == 0 ? "YES":"NO");
    }
  }

  return EXIT_SUCCESS;
}

int cmp(const void *a, const void *b) {
  return (*(char *)a - *(char *)b);
}
