#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
vector<int> divisors(int mdc){
  vector<int> div;
  for(int i = 1; i * i <= mdc; i++){
    if(mdc % i == 0){
      if(i == mdc / i) div.pb(i);
      else{
        div.pb(i);
        div.pb(mdc/i);
      }
    }
  }
  sort(div.begin(), div.end());
  return div;
}
 
void solve(){
  int n; cin >> n;
  vector<int> b(31,0);
  REP(i,0,n){
    int a; cin >> a;
    REP(i,0,31){
      int x = 1 << i;
      if(a & x) b[i]++;
    }
  }
  int mdc = b[0];
  REP(i,1,31) mdc = gcd(mdc,b[i]);
  if(mdc == 0)
    REP(i,1,n+1) cout << i << " ";
  else
    for(auto x : divisors(mdc)) cout << x << " ";
  cout << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
