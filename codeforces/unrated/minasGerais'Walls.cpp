#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
vector<ll> x;
int n;

bool solve(ll mid, int k){
  int i;
  for(i = n - 1; i >= 0; i--){
    if(x[i] < mid){
      break;
    }
  }
  for(int j = i; j >= 0; j--){
    if(k > 0){
      if((x[j] + k) < mid) return false;
      k--;
    }
    else{
      if(x[j] < mid) return false;
    }
  }
  return true;
}
 
int main()
{
  fast_io
  
  cin >> n;
  int k; cin >> k;
  x = vector<ll>(n);
  for(auto &e : x) cin >> e;
  ll l = *min_element(x.begin(),x.end());
  ll r = *max_element(x.begin(),x.end()) + k;
  ll mid = 0, ans = -1;
  while(l <= r){
    mid = l + (r - l) / 2;
    if(solve(mid,k)){
      ans = mid;
      l = mid + 1;
    }
    else r = mid - 1;
  }
  cout << ans << "\n";
  
  return 0;
}
