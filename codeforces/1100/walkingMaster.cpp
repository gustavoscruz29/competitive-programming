#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
 
  ll t; cin >> t;
  while(t--){
    ll a,b,c,d; cin >> a >> b >> c >> d;
    ll movY = 0;
    
    if(d < b) cout << "-1\n";
    else{
      movY = d - b;
      a += movY;
      if(c > a){
        cout << "-1\n";
      }
      else{
        while(c != a){
          a--;
          movY++;
        }
        cout << movY << "\n";
      }
    
    }
  }
  
  return 0;
}
