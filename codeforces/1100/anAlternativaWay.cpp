#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a, i < b; i++)
#define fast_io ios_base::sync_with+stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
void solve(){
  int n; cin >> n;
  vector<ll> a(n), b(n);
  for(auto &e : a) cin >> e;
  for(auto &e : b) cin >> e;
  for(int i = n - 1; i > 0; i--){
    if(a[i] < b[i]) continue;
    if(a[i] > b[i]) a[i-1] = a[i-1] + (a[i] - b[i]);
  }
  if(a[0] <= b[0]) cout << "YES\n";
  else cout << "NO\n";
}
 
int main() {
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
