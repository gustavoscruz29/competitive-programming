#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
ll maximum = 0;
 
void verificar(vector<ll>&pref,ll m, ll n){
  ll maior = LLONG_MIN, menor = LLONG_MAX;
  for(ll i = m; i < n + 1; i+=m){
    maior = max(maior, pref[i] - pref[i-m]);
    menor = min(menor, pref[i] - pref[i-m]);
  }
  maximum = max(maximum, maior - menor);
}
 
int main()
{
  ll t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> pref(n+1,0);
    for(auto &e : a){cin>>e;}
    REP(i,1,n+1){
      pref[i] = pref[i-1] + a[i-1];
    }
    
    if(n == 1) cout << 0 << "\n";
    else{
      for(ll i = 1; i <= n/2; i++){
        if(n % i == 0){
          verificar(pref,i,n);
        }
      }
      cout << maximum << "\n";
      maximum = 0;
    }
  }
}
