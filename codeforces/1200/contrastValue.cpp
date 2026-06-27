#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
using namespace std;
 
void solve(){
  int n; cin >> n;
  vector<int> a(n);
  for (auto &e : a) cin >> e;
  if(a.size() == 1){
    cout << "1\n";
    return;
  }
  vector<int> ans;
  ans.push_back(a[0]);
  ans.push_back(a[1]);
  
  REP(i,2,n){
    int sizeAtual = ans.size();
    int x = ans[sizeAtual - 2] - ans[sizeAtual - 1];
    int y = ans[sizeAtual - 1] - a[i];
    if(x > 0){
      if(y > 0) ans[sizeAtual - 1] = a[i];
      else if(y < 0) ans.push_back(a[i]);
    }
    else{
      if(y < 0) ans[sizeAtual - 1] = a[i];
      else if(y > 0) ans.push_back(a[i]);
    }
  }
  int sizeFinal = ans.size();
  if(ans[0] == ans[1]) sizeFinal--;
  cout << sizeFinal << '\n';
}
 
int main(){
  fast_io
  int t; cin >> t;
  while(t--) solve();
}
