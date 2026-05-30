#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  ll mod = (ll)(1e9+7);
  int t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    REP(i,0,n) {
      cin >> a[i];
    }
    REP(i,0,n) {
      cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    
    ll mult = 1;
    
    REP(i,0,n){
      ll temp = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
      ll count = a.size() - temp;
      mult = mult * max(count - i,0LL) % mod;
    }
    
    cout << mult << "\n";
    
  }
  
  return 0;
}
