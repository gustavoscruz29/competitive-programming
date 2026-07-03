#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with+stdio(0);cin.tie(0);
typedef long long ll;

using namespace std;

vector<vector<ll>> dp;

ll knapsack(vector<ll>&wt, vector<ll>&val, ll W, ll N){
  if(N == 0 || W == 0) return 0;
  if(dp[N][W] != -1) return dp[N][W];
  if(wt[N-1] <= W)
    return dp[N][W] = max(val[N-1] + knapsack(wt, val, W-wt[N-1], N-1), knapsack(wt, val, W, N-1));
  else
    return dp[N][W] = knapsack(wt, val, W, N-1);
}

int main() {
  
  ll N, W; cin >> N >> W;
  vector<ll> wt(N);
  vector<ll> val(N);
  REP(i,0,N){
   cin >> wt[i]; 
   cin >> val[i];
  }
  dp = vector<vector<ll>>(N+1, vector<ll>(W+1, -1));
  cout << knapsack(wt,val,W,N) << '\n';
  
  return 0;
}
