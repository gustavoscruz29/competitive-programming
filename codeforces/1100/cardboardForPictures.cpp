#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
bool verificar(ll w, vector<ll>&si, ll c){
  ll cUsado = 0;
  REP(i,0,si.size()){
    cUsado += (si[i] + (2 * w)) * (si[i] + (2 * w));
    if(cUsado > c) return false;
  }
  return true;
}
 
int main()
{
   fast_io
   int t; cin >> t;
   while(t--){
    ll n, c; cin >> n >> c;
    vector<ll> si(n);
    for(auto &e:si) cin >> e;
    ll l = 0, r = 1e9;
    ll w = 0, ans = -1;
    while(l <= r){
      w = l + (r - l) / 2;
      if(verificar(w,si,c)){
        ans = w;
        l = w + 1;
      }
      else{
        r = w - 1;
      }
    }
    cout << ans << "\n";
   }
  
  return 0;
}
