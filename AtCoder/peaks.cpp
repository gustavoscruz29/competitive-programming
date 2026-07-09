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

vector<int> h(mx);
vector<vector<int>> con(mx);
vector<bool> good(mx, true);

int main(){
  int n, m; cin >> n >> m;
  
  REP(i,1,n+1) cin >> h[i];
  
  REP(i,0,m){
    int a, b; cin >> a >> b;
    con[a].pb(b); con[b].pb(a);
  }
  
  int c = 0;
  REP(i,1,n+1){
    if(!good[i]) continue;
    bool bom = true;
    for(int x : con[i]){
      if(h[x] < h[i]) good[x] = false;
      else{
        good[i] = false;
        bom = false;
        break;
      }
    }
    if(bom) c++;
  }
  
  cout << c << "\n";
  
  return 0;
}
