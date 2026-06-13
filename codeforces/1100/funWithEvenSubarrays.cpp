#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
vector<ll> x;
int n;
 
void solve(){
  cin >> n;
  x = vector<ll>(n);
  for(auto &e : x) cin >> e;
  int target = x[n - 1];
  int len = 1, ans = 0;
  
  while(len < n){
    int pos = n - len - 1;
    if(pos < 0) break;
    if(x[pos] == target) len++;
    else{ ans++; len *= 2;}
  }
  cout << ans << '\n';
}
 
int main(){
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
