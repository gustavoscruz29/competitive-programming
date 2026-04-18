#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;
 
int main(){
  fast_io
  ll t; cin >> t;
  while(t--){
    ll n; cin >> n;
    ll k; cin >> k;
    ll b; cin >> b;
    ll s; cin >> s;
    vector<ll> ais(n,0);
    
    ll min = k * b;
    ll max = (k * b) + (n * (k - 1LL));
    
    if(s >= min && s <= max){
      ais[0] = min;
      ll aux = s - min;
      REP(i,0,n){
        if(aux >= (k - 1LL)){
          ais[i] += k - 1LL;
          aux -= k - 1LL;
        }
        else{
          ais[i] += aux;
          break;
        }
      }
      REP(i,0,n){
        cout << ais[i] << " ";
      }
    }
    else{
      cout << -1;
    }
    
    cout << "\n";
  }
  
  return 0;
}
