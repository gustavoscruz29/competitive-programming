#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll MOD = 998244353;
 
void solve(){
  string s; cin >> s;
  int n = (int)s.size();
  int d = 0;
  ll prodC = 1;
  int cnt = 1;
  REP(i,1,n){
    if(s[i] == s[i-1]) cnt++;
    else{
      d += cnt - 1;
      prodC = (prodC * cnt) % MOD;
      cnt = 1;
    }
  }
  d += cnt - 1;
  prodC = (prodC * cnt) % MOD;
  ll factD = 1;
  REP(i,1,d+1) factD = (factD * i) % MOD;
  cout << d << " " << (factD * prodC) % MOD << endl;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
