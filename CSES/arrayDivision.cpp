#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

bool verificar(vector<ll> &arr, ll n, ll k, ll m){
  ll grupos = 0;
  ll sum = 0;
  REP(i,0,n){
    if(arr[i] > m){
      return false;
    }
    if((sum + arr[i]) > m){
      grupos++;
      sum = 0;
    }
    sum += arr[i];
  }
  if(sum <= m){
    grupos++;
  }
  return grupos <= k;
}

int main()
{
  ll n, k; cin >> n >> k;
  vector<ll> arr(n);
  ll r = 0;
  for(auto &e:arr){cin >> e; r+= e;}
  ll l = 0, m = 0, ans = -1;
  while(l <= r){
    m = l + (r-l) / 2;
    if(verificar(arr, n, k, m)){
      ans = m;
      r = m - 1;
    }
    else{
      l = m + 1;
    }
  }
  
  cout << ans << "\n";
  
  return 0;
}
