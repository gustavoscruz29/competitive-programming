#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const int MAXN = 1e6;
vector<char> isPossible(MAXN + 1, 0);
 
void solve(){
  int n; cin >> n;
  vector<vector<int>> v;
  map<int,int> mp;
  REP(i,0,n){
    int k; cin >> k;
    vector<int> aux(k);
    REP(j,0,k){
      cin >> aux[j];
      mp[aux[j]]++;
    }
    v.pb(aux);
  }
  REP(i,0,n){
    char f = 1;
    for(auto x : v[i]){
      if(mp[x] == 1){
        f = 0;
        break;
      }
    }
    if (f){
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
