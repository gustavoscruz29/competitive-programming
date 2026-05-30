#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  int t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &e : a) cin >> e;
    ll ans = 0;
    REP(i,0,n){
      ans = __gcd(ans, abs(a[i] - a[n-i-1]));
    }
    
    cout << ans << "\n";
  
  }
 
  return 0;
}
