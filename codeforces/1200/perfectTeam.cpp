#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
bool verificar(ll c, ll m, ll x, ll mid){
  return ((c+m+x)/3 >= mid) && (min(c,m)) >= mid;
}
 
int main()
{
  int q; cin >> q;
  while(q--){
    ll c,m,n; cin >> c >> m >> n;
    ll r = max(c,m);
    ll l = 0, mid = 0, ans = 0;
    while(l<=r){
      mid = l + (r-l)/2;
      if(verificar(c,m,n,mid)){
        ans = mid;
        l = mid + 1;
      }
      else{
        r = mid - 1;
      }
    }
    cout << ans << "\n";
  }
  
  return 0;
}
