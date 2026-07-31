#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const int MAXN = 1e6;
vector<char> isPossible(MAXN + 1, 0);
 
void solve(){
  int n; cin >> n;
  vector<int> a(n);
  for(auto &e : a) cin >> e;
  vector<int> ans;
  REP(i,0,n){
    int l = 1, r = i + 1;
    while(l <= r){
      int m = l + (r - l) / 2;
      if(a[i- m + 1] >= m) l = m + 1;
      else r = m -1;
    }
    ans.pb(r);
  }
  for(auto i : ans) cout << i << " ";
  cout << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
