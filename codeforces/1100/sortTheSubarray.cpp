#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define endl "\n"
typedef long long ll;
 
using namespace std;
 
int main(){
  fast_io
  
  ll t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for(auto &e:a) cin >> e;
    for(auto &e:b) cin >> e;
    ll l = 0, r = n - 1;
    
    REP(i,0,n){
      if(a[i] != b[i]){
        l = i;
        break;
      }
    }
    REP(i,l+1,n){
      if(a[i] == b[i]){
        r = i-1;
        break;
      }
    }
      
    for(ll i = l-1; i >= 0; i--){
      if(b[i] <= b[i+1]) l = i;
      else break;
    }
    REP(i,r+1,n){
      if(b[i] >= b[i-1]) r = i;
      else break;
    }
    
    cout << l+1 << " " << r+1 << "\n";
    
  }
 
  return 0;
}
