#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a, i < b; i++)
typedef long long ll;

using namespace std;

vector<vector<int>> adj;
vector<int> subtree;

void dfs(int a) {
  subtree[a] = 1;
  for (auto u : adj[a]) {
    if (subtree[u] != -1) continue;
    dfs(u);
    subtree[a] += subtree[u];
  }
}

int main() {
  fast_io
  int n;
  cin >> n;
  adj = vector<vector<int>>(n);
  subtree = vector<int>(n, -1);
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    a--;
    adj[a].push_back(i + 1);
  }

  dfs(0);
  for (int i = 0; i < n; i++) {
    cout << max(0, subtree[i] - 1) << ' ';
  }
  cout << '\n';
}
