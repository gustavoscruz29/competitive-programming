#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll MOD = 1e9 + 7;
 
void solve(){
  int n; cin >> n;
  map<ll,ll> freq;
  freq[0]++;
  ll cur = 0;
  bool found = false;
  REP(i,1,n+1){
    ll x; cin >> x;
    cur += (i % 2 != 0) ? x : -x;
    if(freq[cur] > 0) found = true;
    freq[cur]++;
  }
  cout << (found ? "YES\n" : "NO\n");
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
