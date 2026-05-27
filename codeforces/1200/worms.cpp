#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  int n; cin >> n;
  vector<ll> p(n+1,0);
  ll x;
  REP(i,1,n+1){
    cin >> x;
    p[i] = p[i-1] + x;
  }
  
  int m; cin >> m;
  int q;
  while(m--){
    cin >> q;
    auto it = lower_bound(p.begin(),p.end(),q);
    if(it == p.end()){
      cout << n << "\n";
    }
    else{
      ll ind = it - p.begin();
      cout << ind << "\n";
    }
  }
  
  return 0;
}
