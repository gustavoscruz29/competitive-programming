#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;
 
int main(){
  
  fast_io
  ll t; cin >> t;
  
  while(t--){
    ll w; cin >> w;
    ll h; cin >> h;
    ll maior = INT_MIN; 
    ll t = 0;
    REP(i,0,4){
      ll k; cin >> k;
      ll pointF = 0, pointL = 0;
      
      REP(i,0,k){
        ll x; cin >> x;
        if(i == 0){
          pointF = x;
        }
        if(i == (k-1)){
          pointL = x;
        }
      }
      
      ll base = pointL - pointF;
      ll altura;
      if(i <= 1){
        altura = h;
      }
      else{
        altura = w;
      }
      
      maior = max(maior, base * altura);
      t++;
    }
    cout << maior << "\n";
  }
    
  return 0;
}
