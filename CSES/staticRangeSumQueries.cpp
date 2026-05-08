#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  ll n; cin >> n;
  ll q; cin >> q;
  
  vector<ll> v(n);
  vector<ll> p(n+1);
  
  for(auto &e : v) { cin >> e; }
  
  for(int i = 1; i <= n; i++){
    p[i] = p[i-1] + v[i-1];
  }
  
  ll l, r;
  while(q--){
    cin >> l >> r;
    cout << p[r] - p[l-1] << "\n";
  }
  
  return 0;
}
