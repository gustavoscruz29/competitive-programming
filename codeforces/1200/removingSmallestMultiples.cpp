#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
using namespace std;
 
void solve(){
  int n; cin >> n;
  string s; cin >> s;
  vector<bool> isRemoved(n+1, false);
  long long ans = 0;
  REP(i,1,n+1){
    for(int j = i; j <= n; j+= i){
      if(s[j-1] == '1') break;
      if(isRemoved[j]) continue;
      else{
        isRemoved[j] = true;
        ans += i;
      }
    }
  }
  cout << ans << "\n";
}
 
int main(){
  fast_io
  int t; cin >> t;
  while(t--) solve();
}
