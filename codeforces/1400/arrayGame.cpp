#include <bits/stdc++.h>
#define f_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define F first
#define S second
#define endl '\n'
typedef long long ll;
 
using namespace std;
 
void solve(){
  int n; ll k;
  cin >> n >> k;
  vector<ll> a(n);
  for(auto &e : a) cin >> e;
  
  if(k >= 3) {cout << 0 << endl; return;}
  
  sort(a.begin(),a.end());
  ll ans = a[0];
  
  REP(i,0,n){
    REP(j,i+1,n){
      ll d = a[j] - a[i];
      ans = min(ans,d);
      if(k == 2){
        int pos = lower_bound(a.begin(), a.end(), d) - a.begin();
        if(pos < n) ans = min(ans, a[pos] - d);
        if(pos > 0) ans = min(ans, d - a[pos-1]);
      }
    }
  }
  cout << ans << endl;
}
 
int main(){  
  f_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
