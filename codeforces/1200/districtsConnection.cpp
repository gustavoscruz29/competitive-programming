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
  int interval = 1;
  bool ok = true;
  REP(i,2,n+1){
    if(a[i] != a[i-1]){
      for(int j = i - 1; j >= interval; j--){
        if(ok) cout << "YES\n";
        ok = false;
        cout << j << " " << i << endl;
      }
      interval = i;
    }
  }
  
  if(interval == 1){
    cout << "NO\n";
    return;
  }
  if(interval != n){
    for(int i = interval + 1; i < n + 1; i++){
      cout << i << " " << interval - 1 << endl;
    }
  }
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
