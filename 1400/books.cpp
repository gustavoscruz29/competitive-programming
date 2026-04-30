#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  ll n; cin >> n;
  ll t; cin >> t;
  vector<ll> aux(n);
  ll maior = INT_MIN;
  
  REP(i,0,n){
    cin >> aux[i];
  }
  
  ll pointA = 0; 
  ll pointB = 0;
  ll soma = 0;
  ll cont = 0;
  while(pointB < n){
    if(soma + aux[pointB] <= t){
      soma+=aux[pointB];
      cont++;
      pointB++;
    }
    else{
      maior = max(maior,cont);
      soma-=aux[pointA];
      pointA += 1;
      cont--;
    }
    
  }
 
  maior = max(maior,cont);
  
  cout << maior << "\n";
  
  return 0;
}
