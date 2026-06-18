#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;
 
void solve(){
  string s; cin >> s;
  int pref2 = 0, suf = 0;
  for(char x : s){
    if(x == '1' || x == '3')
      suf += 1;
  }
  int ans = pref2 + suf;
  for(char x : s){
    if(x == '2') pref2 += 1;
    if(x == '1' || x == '3') suf -= 1;
    ans = max(ans, pref2+suf);
  }
  cout << (int)s.size() - ans << endl;
}
 
int main() {
  int t; cin >> t;
  while(t--) solve();
}
