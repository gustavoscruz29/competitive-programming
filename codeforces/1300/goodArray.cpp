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
  vector<pair<ll,int>> a(n+1);
  ll sum = 0;
  REP(i,1,n+1){
    ll x; cin >> x;
    a[i] = {x,i};
    sum += x;
  }
  
  sort(a.begin(), a.end());
  
  vector<int> ind;
  if(a[n-1].f == (sum - a[n].f - a[n-1].f))
    ind.pb(a[n].s);
  
  for(int i = n - 1; i >= 1; i--){
    if(a[n].f == (sum - a[n].f - a[i].f))
      ind.pb(a[i].s);
  }
  
  cout << (int)ind.size() << endl;
  for(auto x : ind) cout << x << " ";
  cout << endl;
  
  return 0;
}
