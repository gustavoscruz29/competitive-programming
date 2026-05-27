#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  int t; cin >> t;
  while(t--){
    ll n; cin >> n;
    vector<ll> b(n);
    set<ll> bs;
    REP(i,0,n){
      cin >> b[i];
      bs.insert(b[i]);
    }
    if(bs.size() == n){
      cout << "NO";
    }
    else{
      cout << "YES";
    }
    cout << "\n";
    
  }
  
  return 0;
}
