#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with+stdio(0);cin.tie(0);
typedef long long ll;

using namespace std;

vector<vector<int>> dp;

int main() {
  
  int N, X; cin >> N >> X;
  vector<int> cost(N);
  vector<int> pags(N);
  for(auto &e : cost) cin >> e;
  for(auto &e : pags) cin >> e;
  dp = vector<vector<int>>(N+1, vector<int>(X+1, 0));
  int custo_atual = -1, pag_atual = -1;
  REP(i,1,N+1){
    custo_atual = cost[i-1];
    pag_atual = pags[i-1];
    REP(j,1,X+1){
      dp[i][j] = dp[i-1][j];
      if(custo_atual <= j)
        dp[i][j] = max(dp[i][j], pag_atual + dp[i-1][j-custo_atual]);
    }
  
  }
  cout << dp[N][X] << '\n';
  
  return 0;
}
