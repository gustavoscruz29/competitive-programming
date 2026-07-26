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
  vector<int> a(n+1);
  REP(i,1,n+1) cin >> a[i];
 
  vector<int> nextDiff(n+1);
  nextDiff[n] = n+1;
  for(int i = n-1; i >= 1; i--){
    if(a[i] != a[i+1]) nextDiff[i] = i+1;
    else nextDiff[i] = nextDiff[i+1];
  }
 
  int q; cin >> q;
  while(q--){
    int l, r; cin >> l >> r;
 
    if(nextDiff[l] <= r){
      cout << l << " " << nextDiff[l] << endl;
    } else {
      cout << -1 << " " << -1 << endl;
    }
  }
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
 
  return 0;
}
