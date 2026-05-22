#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io;
  ll t; cin >> t;
  while(t--){
  
    ll n, k, a, b; cin >> n >> k >> a >> b;
    vector<ll> xs(n+1), ys(n+1);
    REP(i,1,n+1){
      cin >> xs[i] >> ys[i];
    }
    
    ll direto = abs(xs[a] - xs[b]) + abs(ys[a] - ys[b]);
    ll mA = LLONG_MAX, mB = LLONG_MAX;
    REP(i,1,k+1){
      mA = min(mA, abs(xs[a] - xs[i]) + abs(ys[a] - ys[i]));
      mB = min(mB, abs(xs[b] - xs[i]) + abs(ys[b] - ys[i]));
    }
    if(k == 0){
      cout << direto << "\n";
    }
    else{
       cout << min(direto, mA+mB) << "\n";
    }
    
  }
}
