#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;

const ll MOD = 1e9 + 7;

void solve(){
  int n,x,y; cin >> n >> x >> y;
  vector<int> a(n);
  for(auto &e: a) cin >> e;
  map<pair<int,int>, int> modXY; 
  ll count = 0;
  REP(i,0,n){
    int p1 = a[i] % x;
    int p2 = a[i] % y;
    auto it = modXY.find({(x-p1) % x, p2});
    if (it != modXY.end())
      count += it->second;
    modXY[{p1,p2}]++;
  }
  cout << count << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
