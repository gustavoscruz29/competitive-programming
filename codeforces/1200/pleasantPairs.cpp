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
 
int x, y;
 
void solve(){
  int n; cin >> n;
  vector<pair<ll,ll>> v(n);
  REP(i,0,n){
    cin >> v[i].first;
    v[i].second = i + 1;
  }
  sort(v.begin(), v.end());
  int ans = 0;
  REP(i,0,n){
    REP(j,i+1,n){
      if(v[i].first * v[j].first >= 2*n) break;
      if(v[i].first * v[j].first == v[i].second + v[j].second) ans++;
    }
  }
  cout << ans << "\n";
}
 
int main() {
  
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
