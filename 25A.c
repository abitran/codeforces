#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    int diferodd = 0, differ = 0, indexodd = 0, index = 0;
    int nums[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
        if (nums[i] % 2 == 0){
            differ++;
            index = i+1;
        }
        else{
            diferodd++;
            indexodd = i+1;
        }

    }

    printf("%d\n", differ == 1? index:indexodd);




    return 0;
}
