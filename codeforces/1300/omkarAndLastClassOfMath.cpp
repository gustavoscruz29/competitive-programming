#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
void solve(){
  int n; cin >> n;
  for(int i = 2; i * i <= n; i++){
    if(n % i == 0){
      cout << (n/i) << " " << n - (n/i) << endl;
      return;
    }
  }
  cout << 1 << " " << n-1 << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
