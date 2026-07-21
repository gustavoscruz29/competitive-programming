#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll MOD = 1e9 + 7;
 
void solve(){
  int n; cin >> n;
  string a, b; cin >> a >> b;
  vector<char> c(n,'0');
  int s0 = 0, s1 = 0;
  REP(i,0,n){
    if(a[i] == '0') s0++;
    else s1++;
    if(s0 == s1) c[i] = '1';
  }
  bool change = false;
  for(int i = n-1; i >= 0; i--){
    if(a[i] != b[i]){
      if(!change){
        if(c[i] != '1'){
          cout << "NO\n";
          return;
        }
        else change = true;
      }
    }
    else{
      if(change){
        if(c[i] != '1'){
          cout << "NO\n";
          return;
        }
        else
          change = false;
      }
    }
  }
  cout << "YES\n";
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
