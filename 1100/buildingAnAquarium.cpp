#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
bool verificar(ll x, vector<ll>&ais, ll m, ll n){
  ll sum = 0;
  REP(i,0,n){
    if((m - ais[i]) > 0){
      sum += m - ais[i];
    }
  }
  return sum <= x;
}
 
int main()
{
  int t; cin >> t;
  
  while(t--){
    ll n, x; cin >> n >> x;
    vector<ll> ais(n);
    for(auto &e:ais){cin >> e;}
    ll maior = ais[0];
    REP(i,1,n){
      maior = max(maior, ais[i]);
    }
    ll l = 0, r = maior + (x / n);
    ll m = 0;
    ll answer = -1;
    while(l <= r){
      m = l + (r - l) / 2;
      if(verificar(x,ais,m,n)){
        answer = m;
        l = m + 1;
      }
      else{
        r = m - 1;
      }
    }
    
    cout << answer << "\n";
    
  }
  
  return 0;
}
