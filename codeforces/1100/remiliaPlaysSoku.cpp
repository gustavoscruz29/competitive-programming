#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;

void solve(){
  ll n, x1, x2, k; cin >> n >> x1 >> x2 >> k;
  if(n < 4){
    cout << "1\n";
    return;
  }
  ll m = abs(x1 - x2);
  cout << min(m, n - m) + k << endl;
}

int main() {
  int t; cin >> t;
  while(t--) solve();
}
