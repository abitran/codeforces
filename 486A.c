#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){

    long long n; 
    long long f = 0;
    scanf("%lld", &n);
    f = f + (n%2==0 ? n/2 : (n-1)/2 -n);

    printf("%lld\n", f);

    return 0;

}



