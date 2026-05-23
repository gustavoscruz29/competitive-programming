#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
bool ver(ll mid, ll k, vector<ll> ais){
    ll sum = 0;
    REP(i,ais.size()/2,ais.size()){
      if(mid - ais[i] > 0){
        sum += mid - ais[i];
      }
      if(sum > k) return false;
    }
    return true;
}
 
int main()
{
  fast_io;
  
  ll n, k; cin >> n >> k;
  vector<ll> ais(n);
  for(auto &e:ais) cin >> e;
  sort(ais.begin(),ais.end());
  ll l = 0, r = 10e9, ans = -1, mid = 0;
  while(l<=r){
    mid = l + (r - l) / 2;
    if(ver(mid, k, ais)){
      ans = mid;
      l = mid + 1;
    }
    else{
      r = mid - 1;
    }
  }
  cout << ans << "\n";
}
