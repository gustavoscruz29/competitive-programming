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
    ll n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    ll tamInicial = 0;
    REP(i,0,n){
      if(s[i] == 'g'){
        tamInicial = i;
        break;
      }
    }
    
    string firstC;
    REP(i,0,n){
      if(s[i] == c){
        firstC = s.substr(i, s.size() - i);
        break;
      }
    }
    
    ll maior = -1;
    ll contador = 0;
    ll ativoG = 0;
    ll ativoC = 0;
    
    if(c == 'g'){
      cout << 0 << "\n";
    }
    else{
       REP(i,0,firstC.size()){
        
        if(firstC[i] == c){
          ativoC = 1;
          ativoG = 0;
        }
        
        if(firstC[i] == 'g'){
          if(ativoC == 1){
            maior = max(maior,contador);
            ativoC = 0;
            ativoG = 1;
            contador = 0;
          }
        }
        
        if(ativoC == 1){
          contador++;
        }
        
      }
      
      if(ativoC == 0 && ativoG == 1){
        cout << maior << "\n";
      }
      else{
        maior = max(maior, contador + tamInicial);
        cout << maior << "\n";
      }
    }
   
    
  }
      
  return 0;
}
