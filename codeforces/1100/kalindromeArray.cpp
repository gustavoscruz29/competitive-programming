#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
 
using namespace std;
vector<ll> x;
int n;
 
void solve(){
  cin >> n;
  x = vector<ll>(n);
  for(auto &e : x) cin >> e;
  int j = 0;
  ll e1 = -1, e2 = -1;
  while(j <= n - j - 1){
    if(x[j] != x[n-j-1]){
      e1 = x[j];
      e2 = x[n-j-1];
      break;
    }
    j++;
  }
  if(e1 == -1){
    cout << "YES\n";
    return;
  }
  
  int flag = -1;
  
  vector<ll> a, b;
  
  REP(i,0,n){
    if(x[i] == e1)
      b.push_back(e1);
    else if(x[i] == e2)
      a.push_back(e2);
    else{
      a.push_back(x[i]); 
      b.push_back(x[i]);
    }
  }
  
  j = 0;
  int m = (int) a.size();
  while(j <= m - j - 1){
    if(a[j] != a[m - j - 1]){
      flag = 1;
      break;
    }
    j++;
  }
  
  if(flag == -1){
    cout << "YES\n";
    return;
  }
  flag = -1;
  j = 0;
  int p = (int) b.size();
  while(j <= p - j - 1){
    if(b[j] != b[p - j - 1]){
      flag = 1;
      break;
    }
    j++;
  }
  if(flag == -1){
    cout << "YES\n";
    return;
  }
  
  cout << "NO\n";
}
 
int main(){
  fast_io
  
  int t; cin >> t;
  while(t--) solve();
  
  return 0;
}
