#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;
 
vector<int> getBest3(vector<ll> &x){
  vector<int> best(3,-1);
  REP(i,0,x.size()){
    if(best[0] == -1 || x[i] > x[best[0]]){
      best[2] = best[1];
      best[1] = best[0];
      best[0] = i;
    }
    else if(best[1] == -1 || x[i] > x[best[1]]){
      best[2] = best[1];
      best[1] = i;
    }
    else if(best[2] == -1 or x[i] > x[best[2]])
      best[2] = i;
  }
  return best;
}
 
void solve(){
  int n; cin >> n;
  vector<ll> a(n), b(n), c(n);
  for(auto &e : a) cin >> e;
  for(auto &e : b) cin >> e;
  for(auto &e : c) cin >> e;
  ll ans = 0;
  for(auto x : getBest3(a)){
    for(auto y : getBest3(b)){
      for(auto z : getBest3(c)){
        if(x != y && x != z && y != z)
          ans = max(ans, a[x] + b[y] + c[z]);
      }
    }
  }
  cout << ans << endl;
}
 
int main() {
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
