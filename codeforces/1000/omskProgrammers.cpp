#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
vector<ll> x;
int n;
 
void solve(){
  int a, b, x; cin >> a >> b >> x;
  int maior, menor;
  if(a > b){
    maior = a;
    menor = b;
  }
  else{
    maior = b;
    menor = a;
  }
  if(a == b){
    cout << "0\n";
    return;
  }
  int op = 0, aux = 0;
  int dif2 = 0, melhor = INT_MAX;
  while(maior != menor){
    dif2 = maior - menor;
    melhor = min(melhor, op + dif2);
    maior /= x;
    op++;
    if(maior < menor){
      aux = maior;
      maior = menor;
      menor = aux;
    }
  }
  cout << min(op,melhor) << "\n";
}
 
int main(){
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
