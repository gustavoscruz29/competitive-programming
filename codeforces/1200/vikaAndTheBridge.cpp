#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
typedef long long ll;
 
using namespace std;
 
void solve(){
  int n, k; cin >> n >> k;
  vector<vector<int>> cores(k);
  REP(i,0,k) cores[i].push_back(0);
  int x;
  REP(i,1,n+1){
    cin >> x;
    x--;
    cores[x].push_back(i);
  }
  REP(i,0,k) cores[i].push_back(n+1);
  
  int ans = INT_MAX;
  REP(i,0,k){
    int maxi = -1;
    REP(j,1,cores[i].size()){
      maxi = max(maxi, cores[i][j] - cores[i][j-1] - 1);
    }
    int novoMax = -1;
    int cont = -1;
    REP(j,1,cores[i].size()){
      if((cores[i][j] - cores[i][j-1] - 1) != maxi || cont == 1){
        novoMax = max(novoMax, cores[i][j] - cores[i][j-1] - 1);
      }
      else{
        cont = 1;
      }
    }
    novoMax = max(novoMax, maxi / 2);
    ans = min(ans,novoMax);
  }
  cout << ans << '\n';
}
 
int main(){
  int t; cin >> t;
  while(t--) s
