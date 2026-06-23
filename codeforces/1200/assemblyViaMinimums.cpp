#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;

void solve(){
  int n; cin >> n;
  int m = n * (n - 1) / 2;
  vector<int> v(m);
  for(auto &e : v) cin >> e;
  sort(v.begin(), v.end());
  int x = n - 1, i = 0;
  while(x > 0){
    cout << v[i] << ' ';
    i += x;
    x--;
  }
  cout << "1000000000\n";
}

int main() {
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
