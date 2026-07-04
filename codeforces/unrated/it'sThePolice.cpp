#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define endl '\n'
typedef long long ll;
using namespace std;

const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
vector<int> adj[mx];
map<ll,ll> mp, viz;

int main(){
  int n, m; cin >> n >> m;
  REP(i,0,m){
    int a, b; cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
    mp[a]++, mp[b]++;
  }
  int idx = -1;
  ll max = INF;
  REP(i,1,n+1){
    if(mp[i] < max){
      max = mp[i];
      idx = i;
    }
  }
  
  for(auto i : adj[idx]) viz[i] = 1;
  viz[idx] = 1;
  
  REP(i,1,n+1){
    if(viz[i]) cout << "0 ";
    else cout << "1 ";
  }
  cout << "\n";
}
