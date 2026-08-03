#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
ll cal(ll x){
  return x * (x + 1) / 2;
}
 
void solve(){
  ll k,x; cin >> k >> x;
  ll l = 1, h = 2*k-1, ans = 2*k-1;
  while(l <= h){
    ll mid = l + (h - l) / 2;
    ll cnt;
    if(mid >= k) cnt = cal(k) + cal(k-1) - cal(2*k-1-mid);
    else cnt = cal(mid);
    if(cnt >= x){
      ans = mid;
      h = mid - 1;
    }
    else l = mid + 1;
  }
  cout << ans << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
