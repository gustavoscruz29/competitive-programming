#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define f first
#define s second
#define endl '\n'
typedef long long ll;
using namespace std;
 
int main() {
  fast_io
  int n; cin >> n;
  vector<pair<ll,ll>> a(n);
  vector<ll> b(n), c(n);
  for(auto &e : b) cin >> e;
  for(auto &e : c) cin >> e;
  REP(i,0,n) a[i] = {b[i] - c[i], b[i]};
  sort(a.rbegin(),a.rend());
  ll sum = 0;
  REP(i,0,n-1){
    if(a[i].f < 0){
      cout << "-1\n";
      return 0;
    }
    sum += a[i].s;
  }
  if(a[n-1].f < 0){
    cout << "-1\n";
    return 0;
  }
  
  sum += (a[n-1].s - a[n-1].f);
  
  cout << sum << endl;
  
  return 0;
}
