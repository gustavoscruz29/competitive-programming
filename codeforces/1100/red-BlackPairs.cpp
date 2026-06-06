#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    int n; cin >> n;
    vector<string> c(2);
    cin >> c[0] >> c[1];
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    REP(i,0,n){
      dp[i+1] = min(dp[i+1], dp[i] + (c[0][i] != c[1][i]));
      if(i + 1 < n)
        dp[i+2] = min(dp[i+2], dp[i] + (c[0][i] != c[0][i+1]) + (c [1][i] != c[1][i+1]));
    }
    cout << dp[n] << '\n';
  }
  
  return 0;
}
