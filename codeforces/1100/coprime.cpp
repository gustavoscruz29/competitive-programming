#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
 
int main()
{
  fast_io
  
  int t; cin >> t;
  vector<int> pairs[1001];
  REP(i,1,1001){
    REP(j,1,1001){
      if(__gcd(i, j) == 1) pairs[i].push_back(j);
    }
  }
  
  while(t--){
    int n; cin >> n;
    vector<int> idx(1001,0);
    int x;
    REP(i,1,n+1){
      cin >> x;
      idx[x] = i;
    }
    int ans = -1;
    REP(i,1,1001){
      if(idx[i] == 0) continue;
      for(int j : pairs[i]){
        if(idx[j] != 0) ans = max(ans, idx[i] + idx[j]);
      }
    }
    cout << ans << "\n";
  }
  
  return 0;
}
