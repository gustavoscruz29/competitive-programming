#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  ll t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> p(n+1,0);
    ll x;
    REP(i,1,n+1){
      cin >> x;
      p[i] = p[i-1] + x;
    }
    ll maior = 1;
    REP(i,1,n){
      maior = max(maior, __gcd(p[i], p[n] - p[i]));
    }
    cout << maior << "\n";
  }
  
  return 0;
}
