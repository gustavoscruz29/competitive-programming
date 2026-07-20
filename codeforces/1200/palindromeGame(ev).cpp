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
  int z = 0;
  REP(i,0,n)
    if(s[i] == '0') z++;
  if((z % 2 == 0) || z == 1)
    cout << "BOB\n";
  else
    cout << "ALICE\n";
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
