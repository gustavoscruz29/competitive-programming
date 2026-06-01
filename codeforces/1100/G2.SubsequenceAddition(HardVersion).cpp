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
    vector<ll> a(n);
    for(auto &e : a) cin >> e;
    sort(a.begin(), a.end());
    ll ok = 0, sum = 0;
    REP(i,0,n){
      if(i < 2){
        if(a[i] != 1){
          ok = -1;
          break;
        }
        else{
          sum += a[i];
        }
      }
      else{
        if(a[i] > sum){
          ok = -1;
          break;
        }
        else{
          sum+=a[i];
        }
      }
    }
    if(ok == -1) cout << "NO\n";
    else cout << "YES\n";
  }
      
  return 0;
}
