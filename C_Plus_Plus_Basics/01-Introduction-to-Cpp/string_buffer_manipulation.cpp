#include <bits/stdc++.h>
using namespace std;
long long dp[35];
long long tetranacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (n == 3) return 2;
    if (dp[n] != -1) return dp[n];
    return dp[n] = tetranacci(n-1) + tetranacci(n-2) + tetranacci(n-3) + tetranacci(n-4);
}
int main() {
    int n;
    if (cin >> n) { 
        for (int i = 0; i <= 30; i++) {
            dp[i] = -1;
        }
        cout << tetranacci(n) << "\n";
    }
    return 0;
}