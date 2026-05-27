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
    ll m; cin >> m;
    vector<vector<ll>> array(m, vector<ll>(n));
    vector<vector<ll>> prefixSum(m, vector<ll>(n+1,0));
    vector<ll> somaDaColuna(m,0);
    
    REP(i,0,n){
      REP(j,0,m){
        cin >> array[j][i];
      }
    }
    
    REP(j,0,m){
      sort(array[j].begin(), array[j].end());
    }
    
    REP(j,0,m){
      REP(i,1,n+1){
        prefixSum[j][i] += (prefixSum[j][i-1] + array[j][i-1]);
      }
    }
    
    ll somaTotal = 0;
    REP(j,0,m){
      REP(i,1,n+1){
        somaDaColuna[j] += (i * array[j][i-1]) - prefixSum[j][i];
      }
      somaTotal += somaDaColuna[j];
    }
    
    cout << somaTotal << "\n";
    
  }
  
  return 0;
}
