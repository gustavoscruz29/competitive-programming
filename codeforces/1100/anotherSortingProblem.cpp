#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
vector<ll> a;
int n;

void solve(){
  cin >> n;
  a = vector<ll>(n);
  ll dif = 0;
  for(auto &e : a) cin >> e;
  REP(i,0,n-1){
    dif = max(dif,a[i]-a[i+1]);
  }
  REP(i,1,n){
    if(a[i] < a[i-1]){
      a[i] = a[i] + dif;
      if(a[i] < a[i-1]){
        cout << "NO\n";
        return;
      }
    }
  }
  cout << "YES\n";
}
 
int main(){
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
