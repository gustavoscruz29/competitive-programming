#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll MOD = 998244353;
 
void solve(){
  int n; cin >> n;
  vector<int> dif(n);
  for(auto &e : dif) cin >> e;
  int maxDif = INT_MIN;
  REP(i,0,n){
    int b; cin >> b;
    dif[i] = dif[i] - b;
    maxDif = max(maxDif, dif[i]);
  }
  vector<int> ans;
  REP(i,0,n){
    if(dif[i] == maxDif)
      ans.pb(i+1);
  }
  cout << (int)ans.size() << endl;
  REP(i,0,(int)ans.size())
    cout << ans[i] << " ";
  cout << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
