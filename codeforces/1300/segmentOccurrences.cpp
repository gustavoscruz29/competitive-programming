#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;

int main()
{
  fast_io
  int m,n,q; cin >> n >> m >> q;
  string s,t; cin >> s >> t;
  vector<pair<int,int>> inter;
  
  REP(i,m-1,n){
    if(s.substr(i-m+1,m) == t){
      inter.push_back({i-m+1, i});
    }
  }
  
  int l, r, occ = 0;
  while(q--){
    cin >> l >> r;
    for(auto x : inter){
      if(l <= (x.first + 1) && r >= (x.second + 1)){
        occ++;
      }
    }
    cout << occ << "\n";
    occ = 0;
  }
  
  return 0;
}
