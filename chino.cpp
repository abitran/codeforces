#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string sa, sb, sc;
    cin >> sa >> sb >> sc;

    vector<int> cnt1(26), cnt2(26);
    for (char c : sa) cnt1[c - 'A'] += 1;
    for (char c : sb) cnt1[c - 'A'] += 1;
    for (char c : sc) cnt2[c - 'A'] += 1;

    for (int i = 0; i < 26; ++i) {
        if (cnt1[i] != cnt2[i]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
