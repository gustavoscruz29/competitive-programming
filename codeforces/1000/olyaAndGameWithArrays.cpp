#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main()
{
  fast_io
  long long t; cin >> t;
  
  while(t--){
    vector <vector<long long>> lista;
    long long soma = 0;
    long long n; cin >> n;
    REP(i,0,n){
      long long m; cin >> m;
      vector<long long> mi;
      REP(i,0,m){
        long long ai; cin >> ai;
        mi.push_back(ai);
      }
      lista.push_back(mi);
    }
  
    vector<long long> menores;
      
    REP(i,0,n){
      sort(lista[i].begin(), lista[i].end());
    }
    
    long long menor = lista[0][0];
    
    REP(i,0,n){
      menores.push_back(lista[i][1]);
      if(lista[i][0] < menor){
        menor = lista[i][0];
      }
    }
    
    sort(menores.begin(), menores.end());
    
    soma = menor;
    
    REP(i,1,n){
      soma += menores[i];
    } 
    
    cout << soma << "\n";
    
  }    
  return 0;
}
