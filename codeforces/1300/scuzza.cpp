#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  int t; cin >> t;
  while(t--){
    int n, q; cin >> n >> q;
    vector<int> pMax(n+1,0);
    vector<ll> pref(n+1,0);
    int x; cin >> x;
    pref[1] = x;
    pMax[1] = x;
    REP(i,2,n+1){
      cin >> x;
      pref[i] = pref[i-1] + x;
      if(pMax[i-1] >= x){
        pMax[i] = pMax[i-1];
      }
      else{
        pMax[i] = x;
      }
    }
    
    int k;
    while(q--){
      cin >> k;
      auto it = upper_bound(pMax.begin(),pMax.end(),k);
      if(it == pMax.end()){
        cout << pref[n] << " ";
      }
      else{
        ll indice = it - pMax.begin();
        indice--;
        cout << pref[indice] << " ";
      }
    }
    cout << "\n";
  }
  
  return 0;
}
