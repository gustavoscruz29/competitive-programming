#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  ll t; cin >> t;
  while(t--){
    ll a, b; 
    cin >> a >> b;
    int operations = 1;
    int resposta = INT_MAX;
    int i = 0;
    
    if(b == 1){
      i = 1;
    }
    
    while(i != 32){
      int operations = i;
      ll bAux = b + i;
      ll aAux = a;
      while(aAux != 0){
        aAux = aAux / bAux;
        operations++;
      }
      resposta = min(resposta,operations);
      i++;
    }
   
    
    cout << resposta << "\n";
    
  }
  
  return 0;
}
