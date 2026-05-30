#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define endl "\n"
typedef long long ll;
 
using namespace std;
 
int main(){
  
  ll n; cin >> n;
  vector<ll> a(n);
  vector<ll> p1(n+1,0), p2(n+1,0) ;
  for(auto &e:a) cin >> e;
  REP(i,1,n+1){
    p1[i] = p1[i-1] + a[i-1];
  }
  sort(a.begin(),a.end());
  REP(i,1,n+1){
    p2[i] = p2[i-1] + a[i-1];
  }
  ll m; cin >> m;
  
  ll t, l, r;
  while(m--){
    cin >> t >> l >> r;
    if(t==1){
      cout << p1[r] - p1[l-1] << "\n";
    }
    else{
      cout << p2[r] - p2[l-1] << "\n";
    }
  }
  
  return 0;
}
