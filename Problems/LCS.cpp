#include <iostream>
#include <string>
using namespace std;

int max_val(int a, int b);  // Renamed max to max_val
int lcs(string s1, string s2, int m, int n);

int lcs(string s1, string s2, int m, int n) {
    if (m == 0 || n == 0)
        return 0;
    if (s1[m - 1] == s2[n - 1])
        return 1 + lcs(s1, s2, m - 1, n - 1);
    else
        return max_val(lcs(s1, s2, m, n - 1), lcs(s1, s2, m - 1, n));
}

int max_val(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    string s1 = "AGGTAB";  // Use double quotes for string literals
    string s2 = "GXTXAYB";
    int m = s1.size();
    int n = s2.size();
    cout << lcs(s1, s2, m, n);

    return 0;
}
