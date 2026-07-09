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

vector<vector<int>> adj;
vector<vector<int>> radj;
vector<bool> visitados;

void bfs(int x, vector<vector<int>> &ad){
  queue<int> q;
  visitados[x] = true;
  q.push(x);
  while(!q.empty()){
    int s = q.front(); q.pop();
    for(auto u : ad[s]) {
      if(visitados[u]) continue;
      visitados[u] = true;
      q.push(u);
    }
  }
}


int main(){
  int n, m; cin >> n >> m;
  adj = vector<vector<int>>(n+1);
  radj = vector<vector<int>>(n+1);
  visitados = vector<bool>(n+1);
  
  REP(i,0,m){
    int a, b; cin >> a >> b;
    adj[a].pb(b);
    radj[b].pb(a);
  }
  
  bfs(1, adj);
  
  REP(i,1,n+1){
    if(!visitados[i]){
      cout << "NO\n";
      cout << 1 << " " << i << endl;
      return 0;
    }
  }
  
  visitados = vector<bool>(n+1);
  
  bfs(1, radj);
  
  REP(i,1,n+1){
    if(!visitados[i]){
      cout << "NO\n";
      cout << i << " " << 1 << endl;
      return 0;
    }
  }
  
  cout << "YES\n";
  
  return 0;
}
