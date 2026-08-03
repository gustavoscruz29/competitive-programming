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
 
int x, y;
 
void solve(){
  int n, m; cin >> n >> m;
  int last = n+1;
  int maior = 0;
  vector<int> a(n+1,0);
  vector<int> b(n+1,0);
  REP(i,1,n+1) cin >> a[i];
  REP(i,0,m){
    int x; cin >> x;
    b[x] = -1;
    if(x > maior){
      last = x + 1;
      maior = x;
    }
  }
  ll somaF = 0;
  REP(i, last, n+1){
    somaF += a[i];
  }
  ll partialSum = 0;
  ll sum = 0;
  REP(i,1,last){
    if(b[i] == -1){
      partialSum += a[i];
      sum += abs(partialSum);
      partialSum = 0;
    }
    else{
      partialSum += a[i];
    }
  }
  cout << sum + somaF << "\n";
}
 
int main() {
  
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
