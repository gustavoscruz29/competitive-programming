#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
 
  fast_io
  int t; cin >> t;
  const int inf = INT_MAX;
  
  while(t--){
    int n; cin >> n;
    int menor = inf;
    if(n % 2 == 0){
      cout << n / 2 << " " << n / 2 << "\n";
    }
    else{
      for(int i = 1; (i * i) <= n; i++){
        if(n % i == 0){
          if(i == 1){
            menor = min(menor, n - 1);
          }
          else{
            menor = min(menor, n - (n / i));
          }
        }
      }
      cout << (n - menor) << " " << menor << "\n";
    }
    
  }
  
  return 0;
}
