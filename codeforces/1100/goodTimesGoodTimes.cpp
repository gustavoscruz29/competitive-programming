#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define endl '\n'
typedef long long ll;
using namespace std;
 
void solve(){
  string x; cin >> x;
  int tam = x.size();
  cout << 1;
  REP(i,0,tam-1) cout << 0;
  cout << "1\n";
}
 
int main(){
  fast_io
  int t; cin >> t;
  while(t--) solve();
}
