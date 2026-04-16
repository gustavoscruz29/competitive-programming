#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;
 
int main(){
  fast_io
  
  ll n; cin >> n;
  ll d; cin >> d;
  vector<ll> p(n);
  REP(i,0,n){
    cin >> p[i];
  }
  ll contador = 0;
  ll soma = 0;
  ll ponteiro = 0;
  sort(p.rbegin(), p.rend());
  REP(i,0,p.size()){
    soma += p[i];
    ponteiro += 1;
    while(soma <= d && p.size() > ponteiro){
      p.pop_back();
      soma += p[i];
    }
    if(soma > d){
      contador++;
      soma = 0;
    }
  }
  
  cout << contador << "\n";
  
  return 0;
}
