#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
const int LIMIT = 1000000;
 
int x, y;
 
void solve(){
  int n; cin >> n;
  string s; cin >> s;
  set<char> conj;
  REP(i,0,n) conj.insert(s[i]);
  int menor = mx;
  for(char c : conj){
    int l = 0, r = n - 1;
    int op = 0;
    while(l <= r){
      if(s[l] == s[r]){
        l++, r--;
      }
      else{
        if(s[l] == c){
          l++;
          op++;
        }
        else if(s[r] == c){
          r--;
          op++;
        }
        else{
          op = mx;
          break;
        }
      }
    }
    menor = min(menor, op);
  }
  if(menor == mx) cout << "-1\n";
  else cout << menor << "\n";
}
 
int main() {
  
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
