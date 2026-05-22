#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

int main()
{
  ll l, d; cin >> l >> d;
  int n; cin >> n;
  vector<int> ns(n);
  for(auto &e:ns){cin>>e;}
  sort(ns.begin(), ns.end());
  
  if(l < 12){
    cout << 0 << "\n";
    return 0;
  }
  
  if(n != 0){
    ll add = (ns[0] - 6) / d;
    REP(i,1,n){
      add += ((ns[i] - ns[i-1]) / d) - 1;
    }
    add += ((l - 6) - ns[n-1]) / d;
    cout << add << "\n";
  }
  else{
    cout << ((l - 12) / d) + 1 << "\n";
  }
  
  return 0;
}
