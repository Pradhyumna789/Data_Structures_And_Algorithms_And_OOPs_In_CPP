#include <iostream>
using namespace std;


/*
int balancedBTs(int n) {

  // Base Case
  if (n <= 1) {

    return 1;
  }

  int mod = 1e9 + 7;
  int x = balancedBTs(n - 1);
  int y = balancedBTs(n - 2);

  long long int temp1 = ((long long int)x * x) % mod;
  long long int temp2 = (2 * (long long int)x * y) % mod;
  long long int ans = (temp1 + temp2) % mod;

  return ans;
}
*/

// optimized solution using dynammic programming

#include<bits/stdc++.h>

int balancedBTs(int n) {

vector<long long int> dp(n + 1);

if (n <= 1) {

return 1;

}

dp[0] = 1;
dp[1] = 1;

int mod = 1e9 + 7;

for (int i = 2; i <= n; i++) {

long long int temp1 = dp[i - 1] * dp[i - 1]; 
temp1 = temp1 % mod;

long long int temp2 = 2 * (dp[i - 1] * dp[i - 2]);
temp2 = temp2 % mod;

dp[i] = (temp1 + temp2) % mod;

}

return dp[n];

}
// main code

int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}