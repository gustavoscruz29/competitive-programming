#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;

const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;

int main(){
  int s, n; cin >> s >> n;
  vector<int> size(n), val(n);
  REP(i,0,n){
    cin >> size[i];
    cin >> val[i];
  }
  
  vector<vector<int>> dp(n+1, vector<int>(s+1, 0));
  REP(i,1,n+1){
    int curr_val = val[i - 1];
    int curr_size = size[i - 1];
    REP(j,1,s+1){
      dp[i][j] = dp[i-1][j];
      if(curr_size <= j)
        dp[i][j] = max(dp[i][j], curr_val + dp[i-1][j-curr_size]);
    }
  }
  cout << dp[n][s] << "\n";
  
  return 0;
}
