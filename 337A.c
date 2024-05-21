#include <stdio.h>
#include <stdlib.h>

int comp(const void *, const void *);


int main(int argc, char **argv)
{
    int n, m, min;
    scanf("%d%d", &n, &m);

    int puzzle[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &puzzle[i]);


    qsort(puzzle, m, sizeof(int), comp);

    min = puzzle[n-1] - puzzle[0];

    for (int i = 1; i <= m-n; i++){
        int diff = puzzle[i+n-1] - puzzle[i];
        if (diff < min)
            min = diff;
    }

    printf("%d\n", min);


    return 0;


}


int comp(const void *a, const void *b)
{
    return (*(int*) a - *(int*) b);
}
