#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  
  int t; cin >> t;
  
  while(t--){
  
    ll a; cin >> a;
    ll b; cin >> b;
    ll maior = 0, menor = 0;
    int operations = 0;
    int temOutroMultiplo = 0;
    
    if(a == b){
      cout << 0;
    }
    else{
      if(a > b){
        maior = a;
        menor = b;
      }
      else{
        maior = b;
        menor = a;
      }
      
      if(maior % menor != 0){
        cout << -1;
      }
      else{
        if(maior % 2 == 1){
          cout << -1;
        }
        else{
          if((maior / menor) % 2 != 0){
            cout << -1;
          }
          else{
            while(maior != menor){
              if(maior % 2 == 0){
                maior /= 2;
                operations++;
              }
              else{
                temOutroMultiplo = 1;
                break;
              }
            }
            if(temOutroMultiplo == 1){
              cout << -1;
            }
            else{
              int saida = operations / 3;
              operations -= saida * 3;
              if(operations != 0){
                saida += 1;
              }
              cout << saida;
            }
          }
        }
        
      }
    
    }
    
   cout << "\n";
  
  }
  
 
  
}
