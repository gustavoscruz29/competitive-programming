#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;

void solve(){
  int n, k; cin >> n >> k;
  vector<int> b(31,0);
  REP(i,0,n){
    int x; cin >> x;
    REP(j,0,31){
      int s = 1 << j;
      if(x & s) b[j]++;
    }
  }
  ll sum = 0;
  for(int i = 30; i >= 0; i--){
    if((n - b[i]) <= k){
      sum |= (1 << i);
      k -= (n - b[i]);
    }
  }
  cout << sum << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
