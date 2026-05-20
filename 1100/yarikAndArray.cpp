#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  ll t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &e : a){cin>>e;}
    ll best = a[0], sum = a[0];
    REP(i,1,n){
      if(abs(a[i]) % 2 != abs(a[i-1]) % 2){
        sum = max(a[i],sum+a[i]);
        best = max(best,sum);
      }
      else{
        sum = a[i];
        best = max(best,sum);
      }
    }
    
    cout << best << "\n";
    
  }
}
