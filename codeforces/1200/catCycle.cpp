#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll MOD = 1e9 + 7;
 
void solve(){
  int n,k; cin >> n >> k;
  k--;
  if(n % 2 == 0)
    cout << (k % n) + 1 << endl;
  else
    cout << ((k + (k / (n/2))) % n) + 1 << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
