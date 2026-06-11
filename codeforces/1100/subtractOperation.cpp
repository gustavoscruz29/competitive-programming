#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
void solve(){
  ll n, k; cin >> n >> k;
    vector<ll> a(n);
    map<ll, bool> m;
    for (auto &e : a){
      cin >> e;
      m[e] = true;
    }
    REP(i,0,n){
      if(m.find(a[i]-k) != m.end()){
        cout << "YES\n";
        return;
      }
    }
    cout << "NO\n";
}
 
int main()
{
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    solve();
  }
  
  return 0;
}s
