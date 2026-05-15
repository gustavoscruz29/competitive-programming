#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

bool verificar(vector<ll>&ks, ll maq, ll m, ll k){
  ll time = 0LL;
  REP(i,0,maq){
    time += m / ks[i];
  }
  return time >= k;
}
 
int main()
{
  
  ll maq; cin >> maq;
  ll k; cin >> k;
  vector<ll> ks(maq);
  for (auto &e : ks) {cin >> e;}
  ll menor = ks[0];
  REP(i,1,maq){
    menor = min(menor,ks[i]);
  }
  ll l = 0LL;
  ll r = menor * k;
  ll m = 0LL;
  ll answer = -1LL;
  while(l <= r){
    m = l + (r - l) / 2LL;
    if(verificar(ks,maq,m,k)){
      answer = m;
      r = m - 1LL;
    }
    else{
      l = m + 1LL;
    }
  }
  
  cout << answer << "\n";
  
  return 0;
}
