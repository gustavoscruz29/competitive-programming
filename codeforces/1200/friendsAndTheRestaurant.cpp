#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define endl '\n'
typedef long long ll;
using namespace std;
 
void solve(){
  int n; cin >> n;
  vector<ll> x(n), y(n);
  for(ll &e : x) cin >> e;
  for(ll &e : y) cin >> e;
  vector<ll> dif(n);
  REP(i,0,n) dif[i] = y[i] - x[i];
  sort(dif.begin(), dif.end());
  ll l = 0, r = n - 1;
  ll groups = 0;
  while(l < r){
    if(dif[l] + dif[r] >= 0){
      groups++;
      l++, r--;
    }
    else{
      l++;
    }
  }
  cout << groups << endl;
}
 
int main(){
  fast_io
  int t; cin >> t;
  while(t--) solve();
}
