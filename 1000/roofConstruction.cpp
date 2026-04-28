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
    ll msb = log2(n-1);
    ll price = pow(2,msb);
    
    REP(i,1,price+1){
      cout << price - i << " ";
    }
    
    REP(i,price,n){
      cout << i << " ";
    }
    
    cout << "\n";
    
  }
    
  return 0;
}
