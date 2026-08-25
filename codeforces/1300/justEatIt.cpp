#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
ll kadane(vector<ll> &a, int b, int e){
  ll best = 0, sum = 0;
  for(int i = b; i < e; i++){
    sum = max(a[i], sum+a[i]);
    best = max(best,sum);
  }
  return best;
}
 
void solve(){
  int n; cin >> n;
  vector<ll> a(n);
  ll sum = 0;
  for(auto &e : a){
    cin >> e;
    sum += e;
  }
  ll ans1 = kadane(a,0,n-1);
  ll ans2 = kadane(a,1,n);
  if(ans1 >= sum || ans2 >= sum) cout << "NO\n";
  else cout << "YES\n";
}
 
int main(){
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
