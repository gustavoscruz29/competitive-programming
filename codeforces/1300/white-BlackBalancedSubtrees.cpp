#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
vector<vector<int>> filhos;
vector<int> aux;
int totalSum = 0;
 
int check(int node){
  int sum = aux[node];
  if(filhos[node].size() == 0){
    return sum;
  }
  for(auto v : filhos[node])
    sum += check(v);
  if(sum == 0)
    totalSum++;
  return sum;
}
 
void solve(){
  int n; cin >> n;
  filhos = vector<vector<int>>(n+1);
  aux = vector<int>(n+1);
  REP(i,2,n+1){
    int x; cin >> x;
    filhos[x].pb(i);
  }
  REP(i,1,n+1){
    char c; cin >> c;
    if(c == 'W') aux[i] = -1;
    else aux[i] = 1;
  }
  int a = check(1);
  cout << totalSum << endl;
  totalSum = 0;
}
 
int main() {
  fast_io
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
