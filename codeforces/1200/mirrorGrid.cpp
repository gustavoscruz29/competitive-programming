#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define endl '\n'
typedef long long ll;
using namespace std;
 
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int mx = (int)2e5+9;
 
const int N = 200 * 1000 + 1;
int grau[N];
bool used[N];
vector<int> comp;
vector<int> g[N];
 
void solve(){
  int n; cin >> n;
  vector<vector<char>> mat(n,vector<char>(n));
  REP(i,0,n){
    REP(j,0,n) cin >> mat[i][j];
  }
  int ans = 0;
  REP(i,0,n){
    REP(j,0,n){
      int c0 = 0, c1 = 0;
      if(mat[i][j] == '0') c0++;
      else c1++;
      
      if(mat[j][n-i-1] == '0') c0++;
      else c1++;
      
      if(mat[n-i-1][n-j-1] == '0') c0++;
      else c1++;
      
      if(mat[n-j-1][i] == '0') c0++;
      else c1++;
      
      if((c0 == 0) || (c1 ==0)) continue;
      
      if(c0 >= c1){
        ans+=c1;
        mat[i][j] = '0';
        mat[j][n-i-1] = '0';
        mat[n-i-1][n-j-1] = '0';
        mat[n-j-1][i] = '0';
      }
      else{
        ans+=c0;
        mat[i][j] = '1';
        mat[j][n-i-1] = '1';
        mat[n-i-1][n-j-1] = '1';
        mat[n-j-1][i] = '1';
      }
    }
  }
  cout << ans << endl;
}
 
int main(){
  int t; cin >> t;
  while(t--) solve();
}
