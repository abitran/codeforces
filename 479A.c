#include <stdio.h>
#include <stdio.h>

#define MAX(A,B) (((A) > (B)) ? (A) : (B))

int main(int argc, char **argv)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ans = a + b + c;
    ans = MAX(ans, a+b*c);
    ans = MAX(ans, a*(b+c));
    ans = MAX(ans, a*b*c);
    ans = MAX(ans, (a+b)*c);

    printf("%d\n", ans);

    return 0;

}
