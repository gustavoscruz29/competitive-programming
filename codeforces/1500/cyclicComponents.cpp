#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
 
const int N = 200 * 1000 + 1;
int grau[N];
bool used[N];
vector<int> comp;
vector<int> g[N];
 
void dfs(int v){
  used[v] = true;
  comp.pb(v);
  for(auto viz : g[v])
    if(!used[viz])
      dfs(viz);
}
 
int main(){
  int n, m; cin >> n >> m;
  REP(i,0,m){
    int x, y; cin >> x >> y;
    g[x].pb(y); g[y].pb(x);
    grau[x]++; grau[y]++;
  }
  int ans = 0;
  REP(i,1,n+1){
    if(!used[i]){
      comp.clear();
      dfs(i);
      bool ok = true;
      for(auto v : comp) ok &= grau[v] == 2;
      if(ok) ans++;
    }
  }
  cout << ans << endl;
}
