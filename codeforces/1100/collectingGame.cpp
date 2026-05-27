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
    vector<pair<ll,ll>> a(n);
    vector<ll> prefixSum(n+1,0);
    vector<ll> output(n);
    REP(i,0,n){
     ll x; cin >> x;
     a[i] = {x,i};
    }
    sort(a.begin(),a.end());
    REP(i,1,n+1){
      prefixSum[i] = prefixSum[i-1] + a[i-1].first;
    }
    REP(i,0,n){
      ll j = i;
      ll remov = i;
      while(j < n){
        pair<ll,ll> temp = {prefixSum[j+1] + 1, LLONG_MIN};
        ll it = lower_bound(a.begin(), a.end(), temp) - a.begin();
        it--;
        if(it == j) break;
        remov += it - j;
        j = it;
      }
      output[a[i].second] = remov;
    }
    REP(i,0,n){
      cout << output[i] << " ";
    }
    cout << "\n";
  }
}
