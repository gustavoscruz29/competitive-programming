#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define endl "\n"
typedef long long ll;

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> dist;
vector<int> pai;
int n, m;
int maxDist = -1;

void bfs(int x){
  queue<int> q;
  visited[x] = true;
  q.push(x);
  pai[x] = x; dist[x] = 0;
  
  while(!q.empty()){
    int s = q.front(); q.pop();
    for(auto u : adj[s]){
      if(visited[u]) continue;
      visited[u] = true;
      q.push(u);
      pai[u] = s;
      dist[u] = dist[s] + 1;
    }
  }
}

int main(){
  cin >> n >> m;
  adj = vector<vector<int>>(n);
  visited = vector<bool>(n);
  dist = vector<int>(n,-1);
  pai = vector<int>(n,-1);
  REP(i,0,m){
    int a, b; cin >> a >> b;
    a--, b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  bfs(0);
  
  if(pai[n-1] == -1){
    cout << "IMPOSSIBLE\n";
    return 0;
  }
  cout << dist[n-1] + 1 << "\n";
  vector<int> caminho;
  caminho.push_back(n-1);
  int x = pai[n-1];
  REP(i,0,dist[n-1]){
    caminho.push_back(x);
    x = pai[x];
  }
  for(int i = (int)caminho.size() - 1; i >= 0; i--){
    cout << caminho[i] + 1 << " ";
  }
  cout << "\n";
  
  
  return 0;
}
