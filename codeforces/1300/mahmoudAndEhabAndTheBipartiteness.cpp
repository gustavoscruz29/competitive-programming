#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;

vector<vector<int>> adj;
ll black = 0, white = 0;
vector<int> visited;

void dfs(int n, int c){
  visited[n]++;
  if(c == 1) black++;
  else white++;
  for(int v : adj[n])
    if(!visited[v])
      dfs(v,1-c);
}

int main() {
  fast_io
  int n; cin >> n;
  adj = vector<vector<int>>(n+1);
  visited = vector<int>(n+1,0);
  REP(i,0,n-1){
    int u,v; cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  dfs(1,0);
  
  cout << (white * black) - (n-1) << endl;
  
  return 0;
}
