#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100

void solve() {
    int n, d;
    if (scanf("%d %d", &n, &d) != 2) {
        printf("NO\n");
        return;
    }
    
    int a[MAX_N];
    bool any_greater = false;
    int min1 = 101, min2 = 101;
    
    // Read array, find two smallest, check if any > d
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("NO\n");
            return;
        }
        if (a[i] > d) {
            any_greater = true;
        }
        if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] <= min2) { // Allow a[i] == min1
            min2 = a[i];
        }
    }
    
    // If no elements > d, or min1 + min2 <= d, it's possible
    if (!any_greater || min1 + min2 <= d) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    if (scanf("%d", &t) != 1 || t < 1 || t > 2000) {
        return 1;
    }
    
    while (t--) {
        solve();
    }
    
    return 0;
}
