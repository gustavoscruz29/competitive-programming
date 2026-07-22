#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll MOD = 1e9 + 7;
 
void solve(){
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for(auto &e : a) cin >> e;
  vector<int> mods(m,0);
  REP(i,0,n) mods[a[i] % m]++;
  int ans = 0;
  REP(i,0,m){
    int x = mods[i], y = mods[(m-i) % m];
    if((!x) && (!y)) continue;
    ans += 1 + (max(0, abs(x-y)-1));
    mods[i] = 0;
    mods[(m-i) % m] = 0;
  }
  cout << ans << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
