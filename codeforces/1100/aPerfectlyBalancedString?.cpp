#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
void solve(){
  string s; cin >> s;
  int n = (int)s.size();
  set<char> c;
  int k;
    
  for(k = 0; k < n; k++){
    if(c.find(s[k]) == c.end()){
      c.insert(s[k]);
    }
    else break;
  }
    
  for(int i = k; i < n; i++){
    if(s[i] != s[i-k]){
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
 
}
 
int main()
{
  fast_io
  
  int t; cin >> t;
  
  while(t--){
    solve();
  }
  
  return 0;
}
