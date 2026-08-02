#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
void solve(){
  int n; cin >> n;
  vector<int> a(n+1);
  vector<pair<ll,char>> pSum(n+1);
  pSum[0] = {0,0};
  REP(i,1,n+1){
    cin >> a[i];
    if(a[i] < i)
      pSum[i] = {pSum[i-1].first + 1, 1};
    else
      pSum[i] = {pSum[i-1].first, 0};
  }
  ll total = 0;
  REP(i,1,n+1){
    if(pSum[i].second == 0) continue;
    int ind = a[i];
    if(ind - 1 <= 0) continue;
    total += pSum[ind-1].first;
  }
  cout << total << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
