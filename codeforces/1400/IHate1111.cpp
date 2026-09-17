#include <bits/stdc++.h>
#define f_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define f first
#define s second
#define endl '\n'
typedef long long ll;
using namespace std;
 
void solve(){
  ll x; cin >> x;
  ll r = x % 11;
  if (111LL * r <= x)
      cout << "YES\n";
  else
      cout << "NO\n";
}
 
int main(){
  int t; cin >> t;
  while(t--) solve();
 
  return 0;
}
