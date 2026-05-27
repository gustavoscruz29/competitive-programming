#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
 
  fast_io
  int t; cin >> t;
  const int inf = INT_MAX;
  
  
  while(t--){
   int n; cin >> n;
   int k; cin >> k;
   string stripe; cin >> stripe;
   int prefSum[n+1];
   prefSum[0] = 0;
   int menor = inf;
   
   REP(i,0,n){
    if(stripe[i] == 'W'){
      prefSum[i + 1] = prefSum[i] + 1;
    }
    else{
      prefSum[i + 1] = prefSum[i];
    }
   }
   
   REP(i,k,n+1){
    menor = min(menor, (prefSum[i] - prefSum[i - k]));
   }
   
   cout << menor << "\n";
   
  }
  
  return 0;
}
