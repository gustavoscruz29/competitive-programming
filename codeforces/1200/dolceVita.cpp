#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(ll i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;
 
void solve(){
  int n, x; cin >> n >> x;
  vector<ll> a(n);
  for(auto &e : a) cin >> e;
  sort(a.begin(), a.end());
  vector<ll> p(n+1, 0);
  REP(i,1,n+1) p[i] = p[i-1] + a[i-1];
  ll sum = 0;
  REP(i,1,n+1){
    if(x - p[i] < 0) break;
    sum += ((x - p[i]) / i) + 1;
  }
  cout << sum << "\n";
}
 
int main(){
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
}
