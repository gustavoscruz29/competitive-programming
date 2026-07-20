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
 
void solve(){
  int n; cin >> n;
  string s; cin >> s;
  for(char c = 'a'; c <= 'z'; c++){
    bool belong = false;
    REP(i,0,n){
      if(s[i] == c){
        belong = true;
        break;
      }
    }
    if(!belong){
      cout << c << endl;
      return;
    }
  }
  for(char c1 = 'a'; c1 <= 'z'; c1++){
    for(char c2 = 'a'; c2 <= 'z'; c2++){
      string aux = string{c1,c2};
      bool belong = false;
      for(int i = 0; i < n - 1; i++){
        if(aux == s.substr(i,2)){
          belong = true;
          break;
        }
      }
      if(!belong){
        cout << aux << endl;
        return;
      }
    }
  }
  
  for(char c1 = 'a'; c1 <= 'z'; c1++){
    for(char c2 = 'a'; c2 <= 'z'; c2++){
      for(char c3 = 'a'; c3 <= 'z'; c3++){
        string aux = string{c1,c2,c3};
        bool belong = false;
        for(int i = 0; i < n - 2; i++){
          if(aux == s.substr(i,3)){
            belong = true;
            break;
          }
        }
        if(!belong){
          cout << aux << endl;
          return;
        }
      }
    }
  }
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
