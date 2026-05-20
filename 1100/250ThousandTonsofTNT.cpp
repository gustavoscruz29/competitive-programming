#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
ll maximum = 0;
 
void verificar(vector<ll>&a,ll m, ll n){
  ll maior = LLONG_MIN, menor = LLONG_MAX;
  ll sum = a[0];
  REP(i,1,n){
    if(i % m == 0){
      maior = max(maior, sum);
      menor = min(menor, sum);
      sum = a[i];
    }
    else{
      sum += a[i];
    }
  }
  maior = max(maior, sum);
  menor = min(menor, sum);
  maximum = max(maximum, maior - menor);
}
 
int main()
{
  ll t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &e : a){
      cin>>e;
    }
    if(n == 1) cout << 0 << "\n";
    else{
      for(ll i = 1; i <= n/2; i++){
        if(n % i == 0){
          verificar(a,i,n);
        }
      }
      cout << maximum << "\n";
      maximum = 0;
    }
  }
 
}
