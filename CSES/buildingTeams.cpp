#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;
 
using namespace std;

vector<int> color;
vector<vector<int>> adj;
bool possible = true;

void dfs(int s, int c){
  color[s] = c;
  int newColor = (c == 1 ? 2 : 1);
  for(auto u : adj[s]){
    if(color[u] == 0)
      dfs(u, newColor);
    else if (color[u] == newColor)
      continue;
    else{
      possible = false;
      break;
    }
  }
}

int main() {
  int n, m; cin >> n >> m;
  color = vector<int>(n,0);
  adj = vector<vector<int>>(n);
  REP(i,0,m){
    int a, b; cin >> a >> b;
    a--, b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  REP(i,0,n){
    if(color[i] == 0) dfs(i,1);
    if(!possible) break;
  }
  
  if(!possible)
    cout << "IMPOSSIBLE\n";
  else{
    REP(i,0,n)
      cout << color[i] << ' ';
  }
  cout << endl;
  
  return 0;
}
