#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{

  fast_io
  ll t; cin >> t;
  
  while(t--){
    ll n; cin >> n;
    map<ll,ll> freq;
    vector<ll> ais(n+1);
    vector<ll> aux(n+1);
    ais[0] = 0;
    
    REP(i,1,n+1){
      cin >> ais[i];
      freq[ais[i]] += 1;
    }
    
    ll erro = 0;
    
    for(auto x : freq){
      if(x.second == 1){
        erro = 1;
        break;
      }
    }
    
    if(erro == 1){
      cout << -1;
    }
    else{
      ll tamanhoAtual = 0;
      ll tamanhoAnterior = 0;
      ll j = 1;
      REP(i,1,n+1){
        if(ais[i] != ais[i-1]){
          tamanhoAnterior += freq[ais[i-1]];
          tamanhoAtual += freq[ais[i]];
          aux[i] = tamanhoAtual;
          j = 1;
        }
        else{
          aux[i] = tamanhoAtual - ((tamanhoAtual - j) - tamanhoAnterior);
          j++;
        }
      }
      REP(i,1,n+1){
        cout << aux[i] << " ";
      }
    }
    
    cout << "\n";
    
  }
  
  return 0;
}
