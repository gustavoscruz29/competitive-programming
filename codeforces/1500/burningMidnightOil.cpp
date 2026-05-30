#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define endl "\n"
typedef long long ll;
 
using namespace std;
 
bool ver(ll n, ll k, ll mid){
  ll sum = 0;
  ll x = 0;
  while((mid / pow(k,x)) != 0){
    sum += (mid / pow(k,x));
    x++;
  }
  return sum >= n;
}
 
int main(){
  
  ll n, k; cin >> n >> k;
  ll l = 0, r = n, ans = -1, mid = 0;
  while(l<=r){
    mid = l + (r - l) / 2;
    if(ver(n,k,mid)){
      ans = mid;
      r = mid - 1;
    }
    else{
      l = mid + 1;
    }
  }
  
  cout << ans << "\n";
 
  return 0;
}
