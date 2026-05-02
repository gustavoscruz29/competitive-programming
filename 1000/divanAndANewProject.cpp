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
    vector<pair<ll,ll>> ais(n+1LL);
    vector<ll> coordenadas(n+1LL);
    ais[0] = {-1LL,0LL};
    REP(i,1,n+1LL){
      cin >> ais[i].first;
      ais[i].second = i;
    }
    
    sort(ais.rbegin(), ais.rend());
    
    ll sum = 0;
    ll aux = 1LL;
    
    coordenadas[0LL] = n/2LL;
    if(n % 2 == 0){
      for(int i = 1; i < n + 1; i+=2){
        coordenadas[ais[i-1].second] = (n / 2LL) + (aux);
        coordenadas[ais[i].second] = (n / 2LL) - (aux);
        sum += (ais[i-1].first + ais[i].first) * (aux * 2LL);
        aux++;
      }
    }
    else{
      for(int i = 1; i < n - 1; i+=2){
        coordenadas[ais[i-1].second] = (n / 2LL) + (aux);
        coordenadas[ais[i].second] = (n / 2LL) - (aux);
        sum += (ais[i-1].first + ais[i].first) * (aux * 2LL);
        aux++;
      }
      coordenadas[ais[n-1].second] = (n / 2LL) + (aux);
      sum += (ais[n-1].first) * (aux * 2LL);
    }
    
    cout << sum << "\n";
    REP(i,0,n+1){
      cout << coordenadas[i] << " ";
    }
    cout << "\n";
  
  }
  
  return 0;
}
