#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
using namespace std;
 
int main(){
  fast_io
  
  ll t; cin >> t;
  
  while(t--){
    ll n; cin >> n;
    string s; cin >> s;
    set<char> a;
    set<char> b;
    ll va[n];
    ll vb[n];
    
    REP(i,0,n){
      a.insert(s[i]);
      va[i] = a.size();
    }
    
    for(ll i = n - 1; i >= 0; i--){
      b.insert(s[i]);
      vb[i] = b.size();
    }
    
    ll soma = 0;
    REP(i,0,n-1){
      soma = max(soma, va[i] + vb[i+1]);
    }
    
    cout << soma << "\n";
    
  }
    
  
  return 0;
}
