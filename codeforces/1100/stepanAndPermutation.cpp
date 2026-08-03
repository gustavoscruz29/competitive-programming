#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;
 
int x, y;
 
void solve(){
  int n; cin >> n >> x >> y;
  vector<int> p(n+1);
  REP(i,1,n+1) cin >> p[i];
  int g = gcd(x,y);
  REP(i,1,n+1){
    int dif = abs(p[i] - i);
    if(dif % g != 0){
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}
 
int main() {
  
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
