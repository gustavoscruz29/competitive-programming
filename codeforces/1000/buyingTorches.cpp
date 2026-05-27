#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{

  ll t; cin >> t;
  
  while(t--){
    ll x, y, k;
    cin >> x >> y >> k;
    ll neededSticks = k * (y + 1LL);
    ll opSticks = 0;
    ll quantSticks = 1LL;
    while(quantSticks <= neededSticks){
      if(quantSticks <= neededSticks/x){
        opSticks += quantSticks;
        quantSticks = x * quantSticks;
      }
      else{
        ll lackSticks = neededSticks - quantSticks;
        quantSticks += ((lackSticks + (x - 2LL)) / (x-1LL)) * x; 
        opSticks += ((lackSticks + (x - 2LL)) / (x-1LL));
        break;
      }
    }
    
    cout << opSticks + k << "\n";
    
  }
  
  return 0;
}
