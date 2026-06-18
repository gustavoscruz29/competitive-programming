#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define endl "\n"
typedef long long ll;

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
int n, m;

void dfs(int s){
  if(visited[s]) return;
  visited[s] = true;
  for (auto u : adj[s])
    dfs(u);
}

int main(){
  cin >> n >> m;
  adj = vector<vector<int>>(n);
  visited = vector<bool>(n);
  REP(i,0,m){
    int a, b; cin >> a >> b;
    a--, b--;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  
  vector<int> roads;
  int countComponents = 0;
  REP(i,0,n){
    if(!visited[i]){
      countComponents++;
      dfs(i);
      roads.push_back(i);
    }
  }
  
  int len = (int)roads.size();
  cout << countComponents - 1 << "\n";
  if(len > 1){
    REP(i,1,len){
      cout << roads[i] + 1 << " " << roads[i-1] + 1 << "\n";
    }
  }
  
  return 0;
}
