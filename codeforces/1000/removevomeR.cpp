#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
void solve(){
  int n; cin >> n;
  string s; cin >> s;
  int dif = 0;
  REP(i,1,n){
    if(s[i] != s[i-1]){
      dif++;
    }
  }
  if(dif == 1) cout << 2 << '\n';
  else cout << 1 << '\n';
}
 
int main(){
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
