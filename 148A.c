#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int k, l, m, n, d, damage = 0;
    scanf("%d%d%d%d%d", &k, &l, &m, &n, &d);
    int dragons[d];

    for (int i = 1; i <= d; i++)
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            damage++;


    printf("%d\n", damage);

    return 0;

}

/*

0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
  1 1

*/
