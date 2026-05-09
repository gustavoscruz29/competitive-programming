#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
ll prox_primo(ll n){
  for(ll i = n;;i++){
    bool ehPrimo = true;
    for(ll j = 2; j * j <= i; j++){
      if(i % j == 0){
        ehPrimo = false;
        break;
      }
    }
    if(ehPrimo){
      return i;
    }
  }
}
 
int main()
{
  fast_io
  int t; cin >> t;
  while(t--){
    ll d; cin >> d;
    ll p = prox_primo(d+1LL);
    ll q = prox_primo(p + d);
    
    ll a = min(1LL * p * p * p, 1LL * p * q);
    cout << a << endl;
  }
  
  return 0;
}
