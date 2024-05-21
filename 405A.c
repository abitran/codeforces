#include <stdio.h>
#include <stdlib.h>


int compare(const void *, const void *);

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, (size_t) n, (size_t) sizeof(int), compare);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

}

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);

}
