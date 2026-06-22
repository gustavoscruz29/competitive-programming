#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;

void solve(){
  int n; cin >> n;
  vector<ll> a(n);
  int even = 0, odd = 0;
  for(auto &e : a) cin >> e;
  
  ll k = 2;
  int distinct = 0;
  
  while(distinct != 2){
    set<ll> s;
    REP(i,0,n){
      s.insert(a[i] % k);
    }
    if(s.size() == 2) break;
    distinct = s.size();
    k = k << 1;
  }
  
  cout << k << endl;
  
}

int main() {
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
