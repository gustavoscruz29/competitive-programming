#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  vector<int> sieve(1000001, 0);
  for(int x = 2; x <= 1000001; x++){
    if(sieve[x]) continue;
    for(int u = 2 * x; u <= 1000001; u += x)
      sieve[u] = x;
  }
  
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int cont = 0;
    ll mult = 1;
    while(n > 1){
      int fator = sieve[n];
      if(sieve[n] != 0){
        while(n % fator == 0){
          cont++;
          n /= fator;
        }
        mult *= (cont + 1);
        cont = 0;
      }
      else{
        mult *= 2;
        break;
      }
      
    }
    cout << mult << "\n";
    
  }
  return 0;
}
