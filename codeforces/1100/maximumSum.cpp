#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  int t; cin >> t;
  while(t--){
    ll n,k; cin >> n >> k;
    vector<ll> p(n+1,0);
    vector<ll> a(n);
    REP(i,0,n) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    REP(i,1,n+1) p[i] = p[i-1] + a[i-1];
    ll ans = -1;
    REP(i,0,k+1){
      ans = max(ans, p[n - (k - i)] - p[2*i]);
    }
    
    cout << ans << "\n";
    
  }
  
  return 0;
}
