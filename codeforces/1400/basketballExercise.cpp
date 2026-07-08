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
  fast_io
  int n; cin >> n;
  vector<ll> h1(n), h2(n);
  for(auto &e : h1) cin >> e;
  for(auto &e : h2) cin >> e;
  ll dp1_prev = 0, dp2_prev = 0;
  REP(i,0,n){
    ll dp1_cur = h1[i] + max(0LL, dp2_prev);
    ll dp2_cur = h2[i] + max(0LL, dp1_prev);
    
    dp1_cur = max(dp1_cur, dp1_prev);
    dp2_cur = max(dp2_cur, dp2_prev);
    
    dp1_prev = dp1_cur;
    dp2_prev = dp2_cur;
  }
  
  cout << max(dp1_prev, dp2_prev) << "\n";
  
  return 0;
}
