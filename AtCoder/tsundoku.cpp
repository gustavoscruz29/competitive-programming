#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

int main()
{
  ll n,m,k; cin >> n >> m >> k;
  ll x;
  vector<ll> pA(n+1,0), pB(m+1,0);
  REP(i,1,n+1){
    cin >> x;
    pA[i] = pA[i-1] + x;
  }
  REP(i,1,m+1){
    cin >> x;
    pB[i] = pB[i-1] + x;
  }
  
  ll maior = 0, indice;
  
  REP(i,0,n+1){
    if(k - pA[i] < 0) continue;
    auto it = upper_bound(pB.begin(), pB.end(), k-pA[i]);
    
    if(it == pB.end()){
      indice = m;
    }
    else{
      indice = it - pB.begin();
      indice--;
    }
    maior = max(maior, i + indice);
  }
  
  cout << maior << "\n";
  
  return 0;
}
