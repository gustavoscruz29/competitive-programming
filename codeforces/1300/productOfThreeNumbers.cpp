#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back
#define f first
#define s second
typedef long long ll;
 
using namespace std;
 
void solve(){
  int n; cin >> n;
  vector<int> f;
  for(int i = 2; i * i <= n; i++){
    if(n % i != 0) continue;
    f.pb(i);
    n /= i;
    if(f.size() == 2) break;
  }
  if(n == 1 || f.size() < 2 || n == f[0] || n == f[1])
    cout << "NO\n";
  else
    cout << "YES\n" << f[0] << " " << f[1] << " " << n << '\n';
}
 
int main(){
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
