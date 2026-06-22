#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;
 
void solve(){
  int n, k; cin >> n >> k;
  for(int i = n - k; i <= n; i++){
    cout << i << ' ';
  }
  for(int i = n - k - 1; i >= 1; i--){
    cout << i << ' ';
  }
  cout << endl;
}
 
int main() {
  int t; cin >> t;
  while(t--) solve();
  return 0;
}
