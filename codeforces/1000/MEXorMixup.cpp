#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

long long xorT(long long n){
  ll xo = n % 4LL;
  if (xo == 0LL){
    return n;
  }
  else if(xo == 1LL){
    return 1LL;
  }
  else if(xo == 2LL){
    return n + 1LL;
  }
  else{
    return 0LL;
  }
}
 
int main()
{
  ll t; cin >> t;
  
  while(t--){
    ll a; cin >> a;
    ll b; cin >> b;
    ll xo = xorT(a-1);
    
    if(xo == b){
      cout << a << "\n";
    }
    else{
      if((xo ^ b) != a){
        cout << a+1LL << "\n";
      }
      else{
        cout << a+2LL << "\n";
      }
    }
  }
  
  return 0;
}
