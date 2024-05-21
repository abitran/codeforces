#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);

}


int main(int argc, char **argv)
{
    int n, l;
    scanf("%d%d", &n, &l);
    int lanters[n];
    int i = 0;
    while (n--){
        scanf("%d", &lanters[i]);
        i++;
    }

    qsort(lanters, n, sizeof(int), compare);


    return 0;
}




