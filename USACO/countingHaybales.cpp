#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  freopen("haybales.in","r",stdin);
  freopen("haybales.out","w",stdout);
  fast_io
  ll n, q;
  cin >> n >> q;
  vector<ll> ns(n);
  for(auto &e : ns) {cin >> e;}
  sort(ns.begin(), ns.end());
  
  while(q--){
    ll a, b;
    cin >> a >> b;
    
    auto l = lower_bound(ns.begin(),ns.end(),a);
    auto r = upper_bound(ns.begin(),ns.end(),b);
      
    cout << r - l << "\n";
  
  }
  
  return 0;
}
